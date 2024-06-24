#include "lib.h"
#include "search.h"
#include <stdio.h>

#pragma GCC diagnostic ignored "-Wunused-result"

int a[100] = {0};
int n = 0;

void add(int number);
void display();

int main(int argc, char *argv[]) {
  add(1);
  add(2);
  add(3);
  add(4);

  display();
  int i;

  cyan;
  printf("Search: %s", GREEN);
  scanf(" %d", &i);
  reset_color;

  //     0: left
  // n - 1: right
  //     i: target
  int index = search(a, 0, n - 1, i);

  if (index == -1) {
    red;
    printf("Number not found...\n");
    reset_color;

    return 1;
  }

  green;
  printf("%d %sis at index %s%d\n", i, CYAN, GREEN, index);
  reset_color;

  return 0;
}

void add(int number) { a[n++] = number; }

void display() {
  cyan;
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  reset_color;
  putchar('\n');
}
