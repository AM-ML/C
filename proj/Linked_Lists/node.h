#ifndef _H_NODE_
#define _H_NODE_

#include "lib.h"

#define RES reset_color; BREAK()

struct node {
  int num;
  struct node *next;
};

void print_nodes(struct node *n) {
  while (n != NULL){
    green;
    printf("%d ", n -> num);
    n = n -> next;
  } RES;
}

void insert(struct node **first_node, struct node *new_node) {
  new_node -> next = *first_node;
  *first_node = new_node;
}


#endif
