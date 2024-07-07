#ifndef _READLINE_H__
#define _READLINE_H__

#include <stdio.h>

int readline(char s[], int len) {
  int c, i = 0;
  while((c = getchar()) != '\n') {
    if (i < len)
      s[i++] = (char) c;
  }
  s[i] = '\0';
  return i;
}

#endif
