#include "lib.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

  // 2 ints
  int *array = (int *) malloc(sizeof(int) * 2);

  array[0] = 1;
  array[1] = 2;

  array = realloc(array, sizeof(int) * 3);

  array[2] = 3;

  PRINT_INT(array[2]);
  return 0;
}
