#ifndef _H_SEARCH__
#define _H_SEARCH__
#include "lib.h"
#include "node.h"

void search_function(void);
Part* find_part(int number);

Part* find_part(int number) {
  Part *p;

  for(p = inventory;
      p != NULL && number > p -> number;
      p = p -> next)
    ;
  if (p != NULL && number == p -> number)
    return p;

  return NULL;
}

void search_function(void) {
  int number;
  Part *p;

  cyan;
  printf("Enter Part Number: %s", GREEN);
  scanf("%d", &number);
  reset_color;

  p = find_part(number);

  if (p != NULL) {
    printf("%s--\n",YELLOW);
    printf("%sPart name: %s%s\n", BLUE, YELLOW,p -> name);
    printf("%sPart quantity: %s%d\n", BLUE,YELLOW, p -> amount);
    printf("%s--\n",YELLOW);
    reset_color;
  } else {
    red;
    printf("Part not found.\n");
    reset_color;
 }
  while (getchar() != '\n'); // empty buffer
}

#endif
