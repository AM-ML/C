#include "lib.h"
#include "defs.h"


int main(int argc, char *argv[]) {
  catalog_itemV2 book;
  book.price = 19.99;
  book.stock = 100;
  book.item.book.pages = 204;
  book.item.book.title = "Atomic Habits";
  book.item.book.author = "James Clear";

  catalog_itemV2 mug;
  mug.price = 5.99;
  mug.stock = 100;
  mug.item.mug.design = "Ramadan Moon Crest";

  catalog_itemV2 shirt;
  shirt.stock = 100;
  shirt.price = 24.99;
  shirt.item.shirt.design = "Ramadan Moon Crest";
  shirt.item.shirt.sizes = 5;
  shirt.item.shirt.colors = 2;

  catalog_itemV2 ramadan_catalog[3] = {book, mug, shirt};

   print_book(ramadan_catalog[0]);
    print_mug(ramadan_catalog[1]);
  print_shirt(ramadan_catalog[2]);

  return 0;
}
