#ifndef _H_GLOBALS__
#define _H_GLOBALS__

#define MAX_NAME_LEN 25
#define MAX_PARTS 100

#include <malloc.h>
#include <stdio.h>

typedef struct {
  int number;
  char name[MAX_NAME_LEN + 1];
  unsigned int quantity;
} Part;

extern Part inventory[MAX_PARTS];
extern int num_parts;

char **read_line();

#endif
