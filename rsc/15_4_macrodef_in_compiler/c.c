#include "lib.h"

int main(int argc, char *argv[]) {
  int i = 5;

#ifdef DEBUG
  PRINT_INT(i);
#endif

  return 0;
}
