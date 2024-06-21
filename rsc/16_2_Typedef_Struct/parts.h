#ifndef _H_PARTS___
#define _H_PARTS___
#define MAX_NAME_LENGTH 25
#define LEN 45

// structure tag
typedef struct{
    int number;
    char name[MAX_NAME_LENGTH+1];
    int amount;
} Part;


void display(Part p);
void print_line(int len);

#endif
