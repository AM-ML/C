#include "globals.h"

int num_parts = 0;
Part inventory[MAX_PARTS];

char **read_line() {
  getchar();
  char *str = (char *)malloc(sizeof(char) * (MAX_NAME_LEN + 1));

  int c, i = 0;

  while ((c = getchar()) != '\n') {
    if (i < MAX_NAME_LEN)
      *(str + i++) = c;
  }
  *(str + i) = '\0';

  char **pointer = &str;
  return pointer;
}
