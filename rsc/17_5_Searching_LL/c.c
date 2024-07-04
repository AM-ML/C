#include "lib.h"
#include "node.h"

Node* search_list(Node* root, int target);

int main(int argc, char *argv[]) {
  Node *root = create_node(1);

  add_node(&root, 2);
  add_node(&root, 3);
  add_node(&root, 4);

  Node *special_node = (Node*) malloc(sizeof(Node));
  special_node -> next = NULL;
  special_node -> value = 5;
  special_node -> special_value = 21;

  special_node -> next = root;
  root = special_node;

  print_nodes(root);

  Node* search_result = search_list(root, 5);

  PRINT_INT(search_result -> special_value); // should print 21

  return 0;
}

Node* search_list(Node* root, int target) {
  while(root != NULL && root -> value != target)
    root = root -> next;

  return root;
}
