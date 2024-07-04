#include "lib.h"
#include "node.h"
#pragma GCC diagnostic ignored "-Wunused-result"
void prompt(int *n);

int main(int argc, char *argv[]) {
  struct node* first = NULL;

  int number;
  for(;;) {
    prompt(&number);
    if(number == 0) break;

    insert(&first, init_node(number));
  }
  print_nodes(first);

  return 0;
}

void prompt(int *n) {
  cyan;
  printf("Enter (0 to terminate): %s", GREEN);
  reset_color;
  scanf("%d", n);
}
