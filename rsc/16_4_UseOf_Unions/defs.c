#include "defs.h"

void print_book(catalog_itemV2 book) {
  yellow;
  printf("Book:\n\t%sTitle:  %s%18s\n", CYAN, GREEN, book.item.book.title);
  cyan;
  printf("\tAuthor: %s%18s\n", GREEN, book.item.book.author);
  cyan;
  printf("\tPrice:  %s%18.2lf\n", GREEN, book.price);
  cyan;
  printf("\tPages:  %s%18d\n", GREEN, book.item.book.pages);
  cyan;
  printf("\tStock:  %s%18d\n", GREEN, book.stock);
  reset_color;
}
void print_mug(catalog_itemV2 mug) {
  yellow;
  printf("Mug:\n\t%sDesign: %s%18s\n", CYAN, GREEN, mug.item.mug.design);
  cyan;
  printf("\tPrice:  %s%18.2lf\n", GREEN, mug.price);
  cyan;
  printf("\tStock:  %s%18d\n", GREEN, mug.stock);
  reset_color;
}
void print_shirt(catalog_itemV2 shirt) {
  yellow;
  printf("Shirt:\n\t%sDesign: %s%s\n", CYAN, GREEN, shirt.item.shirt.design);
  cyan;
  printf("\tPrice:  %s%18.2lf\n", GREEN, shirt.price);
  cyan;
  printf("\tStock:  %s%18d\n", GREEN, shirt.stock);
  cyan;
  printf("\tColors: %s%18d\n", GREEN, shirt.item.shirt.colors);
  cyan;
  printf("\tSizes:  %s%18d\n", GREEN, shirt.item.shirt.sizes);
  reset_color;
}

