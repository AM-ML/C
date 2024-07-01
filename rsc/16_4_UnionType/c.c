#include "lib.h"

// int = 4 bytes
// double = 8 bytes
// double > int, U takes up 8 bytes
// int overlays with double in memory
// when int changes, double gets corrupted
// when double changes int gets erased
typedef union {
  int i;
  double d;
} U;
// very efficient when wanting to use multiple types interchangeably

int main(int argc, char *argv[]) {
  U u;
  u.d = 6.7;
  u.i = 50; // somehow, u.d does not get corrupted, but unreliable to get correct value
  PRINT_INT(u.i);
  PRINT_DOUBLE(u.d);

  BREAK();

  u.d = 37.6;
  PRINT_INT(u.i);
  PRINT_DOUBLE(u.d); // u.i gets corrupted

  return 0;
}
