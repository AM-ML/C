#ifndef _H_DELETE____
#define _H_DELETE____

#include "lib.h"
#include "node.h"
#pragma GCC diagnostic ignored "-Wuninitialized"
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"

void delete_function(void);

void delete_function(void) {
  int number;
  Part *prev, *cur;

  cyan;
  printf("Enter part number: %s", GREEN);
  scanf("%d", &number);

  PC_search(inventory, number, &prev, &cur);

  if (cur != NULL) {
    if (cur == inventory) {
      inventory = inventory -> next;
    } else {
        prev->next = cur->next;
        free(cur);
    }
    blue;
    printf("Part %s%d %swas deleted.\n", YELLOW, number, BLUE);
    reset_color;
  } else {
    red;
    printf("Part not found.\n");
    reset_color;
  }
  while (getchar() != '\n')
    ; // empty buffer
}

#endif
