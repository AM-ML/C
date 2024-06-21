#ifndef _H_PARTS___
#define _H_PARTS___
#define MAX_NAME_LENGTH 25
#define LEN 45

// structure tag
struct part {
    int number;
    char name[MAX_NAME_LENGTH+1];
    int amount;
};


void display(struct part p);
void print_line(int len);

#endif
