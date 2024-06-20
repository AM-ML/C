#include "parts.h"
#include <stdio.h>
#include "lib.h"
#define LEN 45

void print_line(int len) {
  for (int i = 0; i < len; i++)
    printf("#");
  puts("\0");
}

void update_part(void) {
    part1.number = 9999;
    part1.quantity = 300;
}


void display() {
  cyan;
  print_line(LEN);
  printf("# part1:%43s#\n", GREEN);
    cyan;
  printf("# \t--Name: %s%25s   #\n", GREEN, part1.name);
  cyan;
  printf("# \tNumber: %s%25d   #\n", GREEN, part1.number);
  cyan;
  printf("# \tAmount: %s%25d   #\n", GREEN, part1.quantity);
    cyan;
  print_line(LEN);
  printf("\n");
    reset_color;
}

