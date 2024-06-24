#include "search.h"

Part *search_part(int number) {
  for (int i = 0; i < num_parts; i++) {
    if (inventory[i].number == number)
      return &inventory[i];
  }
  return &((Part){.number = -1});
}

void search(void) {
  int n;
  cyan;
  printf("Part Number: %s", GREEN);
  scanf(" %d", &n);
  reset_color;

  Part *p = search_part(n);

  if (p->number == -1) {
    red;
    printf("Part Number not found...\n");
    reset_color;
  }

  else
    print_partv2(p);

  putchar('\n');
}

void print_partv2(Part *p) {
  cyan;
  printf("Name: \t\t%s%s\n", GREEN, p->name);
  cyan;
  printf("ID: \t\t%s%d\n", GREEN, p->number);
  cyan;
  printf("Quantity: \t%s%d\n", GREEN, p->quantity);
  reset_color;
}
