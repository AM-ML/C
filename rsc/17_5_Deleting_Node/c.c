#include "lib.h"
#include "node.h"

int main(int argc, char *argv[]) {
  Node *root = create_node(1);
  add_node(&root, 2);
  add_node(&root, 3);
  add_node(&root, 4);

  Node *prev, *cur;

  cur = PC_search(root, 3, &prev);

  print_nodes(root);
  PRINT_INT(prev -> value);
  delete_node(root, 3);

  print_nodes(root);

  return 0;
}
