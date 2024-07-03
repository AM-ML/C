#include "lib.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // allocates memory enough for 2 integers represented by void *
  // (int*) cast converts void* into int, thus a int-compatible memory
  int *int_array = (int*) malloc( sizeof(int) * 2 );

  int_array[0] = 1;
  int_array[1] = 2;

  PRINT_INT(int_array[0]);
  PRINT_INT(int_array[1]);

  free(int_array);

  return 0;
}
