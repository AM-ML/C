#ifndef _H_NODE__
#define _H_NODE__

#include "lib.h"
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
} Node;

Node *create_node(int number);
void add_node(Node **root, int number);
void print_nodes(Node *root);
Node *search_list(Node *root, int target);
Node* PC_search(Node *root, int target, Node **p);
void delete_node(Node **root, int target);

Node *create_node(int number) {
  Node *node = (Node *)malloc(sizeof(Node));

  if (!node) {
    red;
    printf("Could Not Create Node\n");
    reset_color;
    exit(EXIT_FAILURE);
  }

  node->value = number;
  node->next = NULL;

  return node;
}

void add_node(Node **root, int number) {
  Node *new_node = create_node(number);
  new_node->next = *root;
  *root = new_node;
}

void print_nodes(Node *root) {
  for (Node *p = root; p != NULL; p = p->next) {
    green;
    printf("%d %s->%s ", p->value, CYAN, GREEN);
  }

  printf("%s\n", RESET);
}

Node *search_list(Node *root, int target) {
  while (root != NULL && root->value != target)
    root = root->next;

  return root;
}


Node* PC_search(Node *root, int target, Node **p) { //prev-cur search
  Node *prev, *cur;
  for(prev = NULL, cur = root;
      cur != NULL && cur -> value != target;
      prev = cur, cur = cur -> next) ;

  *p = prev;
  return cur;
}

void delete_node(Node **root, int target) {
  Node *previous_node, *current_node;

  current_node = PC_search(*root, target, &previous_node);

  if (current_node == NULL) return; // node not found
  if (previous_node == NULL) // node was root
    *root = current_node -> next;
  else
    previous_node -> next = current_node -> next;
  free(current_node);
}

#endif
