#include "insert.h"
#include "globals.h"
#include "lib.h"
#include <stdio.h>

void prompt_number(int *number);
void prompt_quantity(int *quantity);

void insert() {
  int part_number, part_quantity;
  char *part_name = malloc(sizeof(char) * (MAX_NAME_LEN + 1));

  prompt_number(&part_number);

  cyan;
  printf("Enter part name: %s", GREEN);
  part_name = *read_line();
  reset_color;

  prompt_quantity(&part_quantity);

  inventory[num_parts++] =
      (Part){.number = part_number, .quantity = part_quantity};

  strcpy(inventory[num_parts - 1].name, part_name);

  free(part_name);
}

void prompt_number(int *number) {
  cyan;
  printf("Enter part number: %s", GREEN);
  scanf("%d", number);
  reset_color;
}

void prompt_quantity(int *quantity) {
  cyan;
  printf("Enter part quantity: %s", GREEN);
  scanf("%d", quantity);
  reset_color;
}
