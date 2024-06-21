#include "parts.h"
#include "lib.h"
#include <stdio.h>

void print_line(int len) {
  for (int i = 0; i < len; i++)
    printf("#");
  puts("\0");
}

void display(Part p) {
  cyan;
  print_line(LEN);
  printf("# part:%44s#\n", GREEN);
    cyan;
  printf("# \t--Name: %s%25s   #\n", GREEN, p.name);
  cyan;
  printf("# \tNumber: %s%25d   #\n", GREEN, p.number);
  cyan;
  printf("# \tAmount: %s%25d   #\n", GREEN, p.amount);
    cyan;
  print_line(LEN);
  printf("\n");
    reset_color;
}


