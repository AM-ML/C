#ifndef _H_NUMBER__
#define _H_NUMBER__
#include <stdio.h>
#include "lib.h"

enum {INT_KIND, DOUBLE_KIND};

typedef struct {
  int kind;
  union {
    int i;
    double d;
  } u;
} Number;

/* prototypes */
extern int size;
extern Number a[100];

void add_int(int n);
void add_double(double n);
void print_int(Number n);
void print_double(Number n);

/* definitions */
void add_int(int n) {
  a[size].u.i = n;
  a[size++].kind = INT_KIND;
}

void add_double(double n) {
  a[size].u.d = n;
  a[size++].kind = DOUBLE_KIND;
}

void print_int(Number n) {
  green;
  printf("%d\n", n.u.i);
  reset_color;
}

void print_double(Number n) {
  green;
  printf("%.2lf\n", n.u.d);
  reset_color;
}

void print_numbers(Number array[], int size) {
  for(int i = 0; i < size; i++) {
    if (array[i].kind == INT_KIND)
      print_int(array[i]);
    if(array[i].kind == DOUBLE_KIND)
      print_double(array[i]);
  }
}

#endif
