#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef _H_SQLCONF__
#define _H_SQLCONF__

void create_table(sqlite3 *db);
void insert(sqlite3 *db, int id, const char *name, int quantity);
void update(sqlite3 *db, int id, int quantity);
void delete_record(sqlite3 *db, int id);
void read_records(sqlite3 *db);

#endif
