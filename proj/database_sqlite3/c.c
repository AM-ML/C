#include <stdio.h>
#include <sqlite3.h>
#include "sql.h"

int main(void) {
    sqlite3 *db;
    char *err_msg = 0;

    int rc = sqlite3_open("inventory.db", &db);

    if(rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    create_table(db);

    insert(db, 11111111, "Some Perfume Company", 200);
    insert(db, 11111112, "Some Water Company", 200);

    read_records(db);

    update(db, 11111111, 201);
    update(db, 11111112, 199);

    read_records(db);
    sqlite3_close(db);

    return 0;
}
