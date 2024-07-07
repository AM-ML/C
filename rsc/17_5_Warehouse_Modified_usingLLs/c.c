#include "lib.h"
#include "readline.h"
#include "insert.h"
#include "update.h"
#include "delete.h"
#include "print.h"
#include "search.h"

int main(int argc, char *argv[]) {
  char code;

  for(;;) {
    cyan;
    printf("Enter Operation Code: %s", GREEN);
    scanf("%c", &code);
    reset_color;

    while (getchar() != '\n');

    switch (code) {
      case 'i': insert_function();
        break;
      case 'u': update_function();
        break;
      case 'd': delete_function();
        break;
      case 'p': print_function();
        break;
      case 's': search_function();
        break;
      case 'q': return 0;
      default: printf("%sIllegal Code%s\n", RED, RESET);
    }
    BREAK();
  }

  return 0;
}
