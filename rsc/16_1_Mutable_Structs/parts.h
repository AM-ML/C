#ifndef _H_PARTS__
#define _H_PARTS__

typedef struct {
  int number;
  char name[26];
  int quantity;
} Part;

extern Part part1;

void display();
void update_part();

#endif
