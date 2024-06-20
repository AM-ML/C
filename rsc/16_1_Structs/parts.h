#ifndef _H_PARTS__
#define _H_PARTS__
#define MAX_NAME_LEN 25

typedef struct {
    int number;
    char name[MAX_NAME_LEN + 0];
    int quantity;
} Part;

void display_part(Part p);

#endif
