#include "update.h"

void update(void) {
  int n;

  cyan;
  printf("Enter number: %s", GREEN);
  scanf(" %d", &n);
  reset_color;

  int i = get_index(n);

  if (i == -1) {
    red;
    printf("Part Number not found...\n");
    reset_color;
    exit(-1);
  }

  int q;
  cyan;
  printf("Enter change in quantity: %s", GREEN);
  scanf(" %d", &q);
  reset_color;

  inventory[i].quantity += q;
  cyan;
  printf("Quantity is now %s%d", GREEN, inventory[i].quantity);
}

int get_index(int number) {
  for (int i = 0; i < num_parts; i++)
    if (inventory[i].number == number)
      return i;

  return -1;
}
