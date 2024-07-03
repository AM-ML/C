#include "lib.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
  void *p, *q;
  p = malloc(4); // allocate 4 bytes;
  q = malloc(8); // allocates 8 bytes;

  // p = q; // this re-points p to the 8 byte memory
  //           making the 4 byte memory p once pointed to inaccessable
  //           and to make matters worse, it can't be used by any other
  //           program. usually, languages have garbage collectors
  //           that free the 4 byte memory automatically, but C
  //           doesn't have a garbage collector, making it much faster.
  //           but thus programmer is the garbage collector, and responsible
  //           for each bit of memory. C later on frees all variables when program is
  //           terminated, but until then, memory is kidnapped....!!!!!

  free(p); // free the unneeded memory
  p = q;

  int *a = (int*) p; // 2 ints
  a[0] = 1;
  a[1] = 2;

  PRINT_INT(a[0]);
  PRINT_INT(a[1]);

  return 0;
}
