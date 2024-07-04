#ifndef _H_NODE__
#define _H_NODE__

#include "lib.h"
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
  int special_value;
} Node;

Node *create_node(int number);
void add_node(Node **root, int number);
void print_nodes(Node* root);

Node *create_node(int number) {
  Node *node = (Node *) malloc(sizeof(Node));

  if(!node) {
    red;printf("Could Not Create Node\n"); reset_color;
    exit(EXIT_FAILURE);
  }

  node -> value = number;
  node -> next  = NULL;

  return node;
}

void add_node(Node **root, int number) {
  Node* new_node = create_node(number);
  new_node -> next = *root;
  *root = new_node;
}

void print_nodes(Node* root) {
  for(Node* p = root; p != NULL; p = p -> next) {
    green;
    printf("%d %s->%s ", p -> value, CYAN, GREEN);
  }

  printf("%s\n", RESET);
}

#endif
