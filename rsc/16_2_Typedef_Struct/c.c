#include "lib.h"
#include "parts.h"

int main(int argc, char *argv[]) {
    Part part1 = {9132, "Solid State Drive", 902};
    Part part2 = part1;

    display(part2);

  return 0;
}
