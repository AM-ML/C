#include "sql.h"

void create_table(sqlite3 *db) {
  char *err_msg = 0;
  const char *sql = "CREATE TABLE IF NOT EXISTS "
                    "Parts(Id INTEGER PRIMARY KEY, Name TEXT, Quantity INT);";

  int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

  if (rc != SQLITE_OK) {
    fprintf(stderr, "SQL error: %s\n", err_msg);
    sqlite3_free(err_msg);
  }
}

void insert(sqlite3 *db, int id, const char *name, int quantity) {
  char *err_msg = 0;
  char sql[256];

  snprintf(sql, sizeof(sql),
           "INSERT INTO Parts(Id, Name, Quantity) VALUES(%d, '%s', %d);",
           id, name, quantity);

  int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

  if (rc != SQLITE_OK) {
    fprintf(stderr, "SQL error: %s", err_msg);
    sqlite3_free(err_msg);
  }
}
void update(sqlite3 *db, int id, int quantity) {
  char *err_msg = 0;
  char sql[256];

  snprintf(sql, sizeof(sql),
           "UPDATE Parts SET Quantity = %d WHERE Id = %d;", quantity,
           id);

  int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

  if (rc != SQLITE_OK) {
    fprintf(stderr, "SQL error: %s\n", err_msg);
    sqlite3_free(err_msg);
  }
}
void delete_record(sqlite3 *db, int id) {
  char *err_msg = 0;
  char sql[256];

  snprintf(sql, sizeof(sql), "DELETE FROM Parts where Id=%d;", id);

  int rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

  if (rc != SQLITE_OK) {
    fprintf(stderr, "SQL error: %s\n", err_msg);
  }
}
void read_records(sqlite3 *db) {
  sqlite3_stmt *stmt;
  const char *sql = "SELECT Id, Name, Quantity FROM Parts";

  int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);

  if (rc != SQLITE_OK) {
    fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));
    return;
  }

  printf("\033[1;91mParts:\n");
  while (sqlite3_step(stmt) == SQLITE_ROW) {
    int id = sqlite3_column_int(stmt, 0);
    const unsigned char *name = sqlite3_column_text(stmt, 1);
    int quantity = sqlite3_column_int(stmt, 2);

    printf("\t\033[1;96mId: \033[1;92m%8d\033[1;93m, \033[1;96mName: \033[1;92m%25s\033[1;93m, \033[1;96mQuantity: \033[1;92m%4d\033[0;0m\n", id, name, quantity);
  }

  sqlite3_finalize(stmt);
  puts("\n");
}
