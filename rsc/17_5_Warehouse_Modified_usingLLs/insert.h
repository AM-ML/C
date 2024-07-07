#ifndef _H_INSERT__
#define _H_INSERT__
#pragma GCC diagnostic ignored "-Wunused-result"
#include "lib.h"
#include "node.h"
#include "readline.h"
#include <stdlib.h>

void insert_function(void) {
  Part *cur, *prev, *new_node;

  new_node = (Part *)malloc(sizeof(Part));
  if (!new_node) {
    red;
    printf("Database is full; can't add more parts.\n");
    reset_color;
    return;
  }

  cyan;
  printf("Enter part number: %s", GREEN);
  scanf("%d", &new_node->number);
  reset_color;

  for (cur = inventory, prev = NULL;
       cur != NULL && new_node->number > cur->number;
       prev = cur, cur = cur->next)
    ;
  if (cur != NULL && new_node->number == cur->number) {
    printf("Part already exists.\n");
    free(new_node);
    return;
  }

  while (getchar() != '\n'); // empty buffer

  cyan;
  printf("Enter part name: %s", GREEN);
  readline(new_node->name, NAME_LEN);
  cyan;
  printf("Enter Quantity: %s", GREEN);
  scanf("%d", &new_node->amount);
  reset_color;

  // prev = left of the new_node
  // cur = right of the new_node
  // new_node = between prev and cur, (sorted)
  new_node->next = cur; // point to right of new_node
  if (prev == NULL)
    inventory = new_node; // if cur is root, make new_node root
  else
    prev->next = new_node;

  while (getchar() != '\n'); // empty buffer
}

#endif
