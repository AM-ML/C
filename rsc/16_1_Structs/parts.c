#include "lib.h"
#include "parts.h"
#include <stdio.h>

void display_part(Part p) {
    cyan;
    printf("\npart ---- number: %s%d\n", GREEN, p.number);
    cyan;
    printf("part%s ------ %sname: %s%s\n", BLUE, CYAN, GREEN, p.name);
    cyan;
    printf("part -- quantity: %s%d\n\n", GREEN, p.quantity);
    reset_color;
}
