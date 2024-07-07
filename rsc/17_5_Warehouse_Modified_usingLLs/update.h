#ifndef _H_UPDATE______
#define _H_UPDATE______
#include "lib.h"
#include "search.h"

void update_function(void);

void update_function(void) {
  int number;

  cyan;
  printf("Enter Part Number: %s", GREEN);
  scanf("%d", &number);
  reset_color;

  Part *p = find_part(number);

  if (p != NULL) {
    blue;
    printf("Enter change in quantity: %s", YELLOW);
    scanf("%d", &number);

    p->amount += number;
    blue;
    printf("New Quantity: %s%d\n", GREEN, p->amount);
    reset_color;
  } else {
    red;
    printf("Part not found.\n");
    reset_color;
  }
  while (getchar() != '\n')
    ;
}
#endif
