#ifndef _ARRAY__
#define _ARRAY__
#include "lib.h"
#include <stdlib.h>
#pragma GCC diagnostic ignored "-Wunused-result"
int *init_array(int capacity);
void add_int(int **a, int *size, int *capacity, int n);
void print(int *a, int size);



int *init_array(int capacity) {
  int *a = (int*) malloc( sizeof(int) * (size_t) capacity);
  return a;
}

void add_int(int **a, int *size, int *capacity, int n) {
  if (*size == *capacity) {
    *capacity += 10;
    *a = (int*) realloc(*a, (size_t) (*capacity) * sizeof(int));
  }
  (*a)[(*size)++] = n;
}

void print(int *a, int size) {
  cyan;
  for(int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  reset_color; BREAK();
}

#endif
