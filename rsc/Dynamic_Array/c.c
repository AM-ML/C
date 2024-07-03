#include "lib.h"
#include "array.h"

int main(void) {
  int capacity = 2;
  int *a = init_array(capacity); // 5 ints
  int n, size = 0;

  for(;;) {
    cyan;
    printf("enter: %s", GREEN);
    scanf("%d", &n);
    reset_color;

    if(n == 0) break;

    add_int(&a, &size, &capacity, n);
  }

  print(a, size);

  return 0;
}
