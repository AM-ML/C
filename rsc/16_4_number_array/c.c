#include "lib.h"
#include "number.h"

Number a[100]; int size = 0;

int main(int argc, char *argv[]) {

  add_int(5);
  add_double(24.99);
  add_double(2.44);
  add_int(68);
  add_double(3.14);

  print_numbers(a, size);

  return 0;
}
