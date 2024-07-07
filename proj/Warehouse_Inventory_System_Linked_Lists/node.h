#ifndef _H_NODE__
#define _H_NODE__

#include "lib.h"
#include <stdlib.h>

#define NAME_LEN 35

typedef struct part {
  int number;
  char name[NAME_LEN + 1];
  int amount;
  struct part *next;
} Part;



Part *inventory = NULL; // root

void PC_search(Part *root_node, int number, Part **prev, Part **cur);

void PC_search(Part *root_node, int number, Part **prev, Part **cur) {
  for (*prev = NULL, *cur = root_node;
       *cur != NULL && number > (*cur)->number;
       *prev = *cur, *cur = (*cur)->next);

  if (*cur != NULL && number == (*cur)->number) {
    // Part found
  } else {
    *cur = NULL; // Part not found
  }
}

#endif
