#ifndef _H_DAY__
#define _H_DAY__
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lib.h"

typedef struct {
  char **tasks;
  int len;
} Day;

extern Day days[30];

void add_task(int day, const char *task);
void initializeDays(void);
void prompt(int *day, char**s);
void display_tasks();

#endif
