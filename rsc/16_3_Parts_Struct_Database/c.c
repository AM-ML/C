#include "insert.h"
#include "lib.h"
#include "print.h"
#include "search.h"
#include "update.h"
#include <stdlib.h>

void prompt_user(void);

int main(int argc, char *argv[]) {
  for (;;) {
    prompt_user();
    char code;
  get_input:
    code = getchar();
    reset_color;

    switch (code) {
    case 'i':
      insert();
      break;

    case 's':
      search();
      break;

    case 'u':
      update();
      break;

    case 'p':
      print();
      break;

    case 'q':
      exit(0);

    case '\n':
      // for some fucking reason char code sometimes = '\n'
      // so this is necessary to get input again, fuck C
      goto get_input;

    default:
      break;
    }
    puts("\n");
  }

  return 0;
}

void prompt_user(void) {
  cyan;
  printf("Enter Operation Code: %s", GREEN);
}
