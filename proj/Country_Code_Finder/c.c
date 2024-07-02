#include "lib.h"
#include "code.h"
#include <stdlib.h>

void get_code_function();
void get_country_function();

void read_line(char s[], int len) {
  int c, i = 0;
  while((c = getchar()) != '\n') {
    if (i < len)
      s[i++] = (char) c;
    else break;
  }

  s[i] = '\0';
}

enum {GET_CODE, GET_COUNTRY};

int main(int argc, char *argv[]) {

  if (argc == 1) {
    blue;
    printf("Usage:%s ./c %sOPERATION_CODE\n", CYAN, YELLOW);
    reset_color;
    exit(0);
  }

  int op_code = atoi(argv[1]);
  switch(op_code) {
    case GET_CODE:
      get_code_function();
      break;

    case GET_COUNTRY:
      get_country_function();
      break;
  }

  return 0;
}

void get_code_function() {
  char country[57];
  cyan;
  printf("Enter Country: %s", GREEN);
  read_line(country, 56);
  reset_color;

  Code result = search_code(country);

  if(result.code == -1) {
    red;
    printf("Code Not Found!\n");
    reset_color;
    exit(-1);
  }

  cyan;
  printf("Code: %s%d\n", GREEN, result.code);
  reset_color;
}

void get_country_function() {
  int code;
  cyan;
  printf("Enter Code: %s", GREEN);
  scanf("%d", &code);
  reset_color;

  Code result = search_country(code);

  if (result.code == -1) {
    red;
    printf("Country Not Found!\n");
    reset_color;
    exit(-1);
  }

  cyan;
  printf("Country: %s%s\n", GREEN, result.country);
  reset_color;
}
