#include "lib.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // memory are addressed using void * pointers
  // void*: pointers to memory, not necessarily int * or anything
  void * memory = malloc(sizeof(int) * 4);

  int * int_memory = (int*) memory;

  int_memory[0] = 5;

  PRINT_INT(int_memory[0]);
  free(memory); // free's the memory allocated for int_memory
  PRINT_INT(int_memory[0]); // becomes random and points to junk memory

  return 0;
}
