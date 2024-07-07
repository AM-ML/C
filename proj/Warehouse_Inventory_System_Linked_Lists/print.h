#ifndef ___H_PRINT__
#define ___H_PRINT__

#include "lib.h"
#include "node.h"

void print_function(void);
void print_parts(Part *root_node);

void print_function(void) { print_parts(inventory); }

void print_parts(Part *root_node) {
  printf("\033[0;33m");
  for (int i = 0; i < 60; i++)
    printf("=");
  BREAK();
  printf("|| %sNumber %s|%16s%sName%17s%s|  %sAmount %s||\n", CYAN,
         "\033[0;33m", " ", CYAN, " ", "\033[0;33m", CYAN, "\033[0;33m");
  for (int i = 0; i < 60; i++)
    printf("=");
  BREAK();
  reset_color;
  while (root_node != NULL) {
    printf("%s||  ", "\033[0;33m");
    printf("%s%4d  ", GREEN, root_node->number);
    printf("%s| ", "\033[0;33m");
    printf("%s%35s ", GREEN, root_node->name);
    printf("%s|  %s%5d  %s||", "\033[0;33m", GREEN, root_node->amount,
           "\033[0;33m");
    BREAK();
    reset_color;
    root_node = root_node->next;
  }
  printf("\033[0;33m");
  for (int i = 0; i < 60; i++)
    printf("=");
  BREAK();
  reset_color;
}

#endif
