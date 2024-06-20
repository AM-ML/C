#include "lib.h"
#include "parts.h"

Part part1 = {1239, "Jouvenile Rivers", 2};

int main(int argc, char *argv[]) {

  display();
  update_part(); // structs are mutable
  display();

  return 0;
}
