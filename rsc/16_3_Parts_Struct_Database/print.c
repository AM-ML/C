#include "print.h"
#include "globals.h"

void print(void) {
  print_line();
  for (int i = 0; i < num_parts; i++) {
    print_part(&inventory[i], i + 1);
    print_line();
  }
}

void print_line(void) {
  int tab = 8;
  int factor = 9;
  blue;
  for (int i = 0; i < MAX_NAME_LEN + tab * 2 + factor; i++)
    printf(".");
  printf("\n");
  reset_color;
}

void print_part(Part *part, int index) {
  yellow;
  printf("Part %d\n", index);
  cyan;
  printf("\tname:\t\t%s%*s\n", GREEN, MAX_NAME_LEN, part->name);
  cyan;
  printf("\tnumber:\t\t%s%*d\n", GREEN, MAX_NAME_LEN, part->number);
  cyan;
  printf("\tquantity:\t%s%*d\n", GREEN, MAX_NAME_LEN, part->quantity);
  reset_color;
}
