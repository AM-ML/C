#include "lib.h"
#include "parts.h"

struct part part1 = {1923, "Pepsi Cans", 200};
struct part part2 = {1923, "Coca-Cola Cans", 200};

int main(int argc, char *argv[]) {
    display(part1);
    display(part2);

  return 0;
}
