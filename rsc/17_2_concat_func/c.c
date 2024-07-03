#include "lib.h"
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2); // safer and better strcat

int main(int argc, char *argv[]) {
  string s1 = "Hello";
  string s2 = ", world!";
  string s3 = concat(s1, s2);

  cyan;
  puts(s3);
  reset_color;

  return 0;
}

char *concat(const char *s1, const char *s2) {
  char *result;

  result = malloc(strlen(s1) + strlen(s2) + 1); // since len of 1 char = 1 byte

  if (!result) {
    red;printf("Could not allocate memory...\n");reset_color;
    exit(EXIT_FAILURE);
  }

  strcpy(result, s1);
  strcat(result, s2);

  return result;
}
