#ifndef _H_DEFS___
#define _H_DEFS___

#include "lib.h"
enum { BOOK, MUG, SHIRT };

typedef struct { // wasteful as fuck, allocates space for all items' properties
  int stock;     // all
  double price;  // all
  int pages;     // books
  string title;  // books
  string author; // books
  string design; // shirts / mugs
  int colors;    // shirt
  int sizes;     // shirt
} catalog_item;

typedef struct {
  int stock;
  double price;
  union {
    struct {
      int pages;
      string title;
      string author;
    } book;
    struct {
      string design;
    } mug;
    struct {
      string design;
      int colors;
      int sizes;
    } shirt;
  } item;
} catalog_itemV2;

void print_book(catalog_itemV2 book);
void print_mug(catalog_itemV2 mug);
void print_shirt(catalog_itemV2 shirt);

#endif
