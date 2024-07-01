#include "lib.h"
#pragma GCC diagnostic ignored "-Wunused-result"

int rev_int(int n);

int main(int argc, char *argv[]) {
  int n;
  cyan;
  printf("Enter n: ");
  green;
  scanf("%d", &n);

  n = rev_int(n);

  cyan;
  printf("reverse: %s%d\n", GREEN, n);
  reset_color;

  return 0;
}


int rev_int(int n) {
  int rev = 0;
  int ones = 0;

  while (n != 0) {
    ones = n % 10;
    n = (int) n / 10;
    rev = rev * 10; // add a digit placeholder at the end, rev = 123_
    rev += ones; // append ones to rev, ones = 4?, rev = 1234
  }

  return rev;
}

// example:

// **iteration 1
// n = 123
// ones = n % 10 = 3
// rev = 3
// n /= 10 = (int) 12.3 = 12

// **iteration 2
// ones = n % 10 = 2
// rev = 30 + 2 = 32
// n /= 10 = (int) 1.2 = 1

// **iteration 3
// ones = n % 10 = 1
// rev = 320 + 1 = 321
// n /= 10 = (int) 0.1 = 0

// **iteration 4
// n == 0? break;
