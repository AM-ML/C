#include "lib.h"
#include "node.h"

int main(int argc, char *argv[]) {
  struct node n3 = {5, NULL};
  struct node n2 = {4, &n3};
  struct node n1 = {3, &n2};
  struct node *first = &n1;

  struct node new_node = {2, NULL};

  insert(&first, &new_node);

  print_nodes(first);

  return 0;
}
