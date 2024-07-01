#include "lib.h"

typedef union {
  int i;
  double d;
} U;

int main(int argc, char *argv[]) {
  U u = {.d = 0, .i = 5};
  PRINT_INT(u);

  return 0;
}
