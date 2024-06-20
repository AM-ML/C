#include "lib.h"
#include "parts.h"

int main(int argc, char *argv[]) {
    Part part1 = {1921, .name = "Disk Drive", .quantity = 20};
    Part part2 = {9383, "Printer", 3};

    display_part(part1);
    display_part(part2);

  return 0;
}
