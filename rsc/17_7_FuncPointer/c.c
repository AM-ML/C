#include "lib.h"

// first int indicates function returns int as result
// second int indicates function takes int as argument
// the *FuncPtr indicates it is a function pointer...
typedef int (*FuncPtr) (int);

int square(int x) { // meets FuncPtr specifications
  return x * x;
}

int doubl(int x) { // meets FuncPtr specifications
  return x * 2;
}

void executeFunction(char *name, FuncPtr func, int num) {
  int result = func(num);
  blue;
  printf("%s(%s%d%s): %s%d\n", name, CYAN, num,BLUE, YELLOW, result);
  reset_color;
}

#define F(func, num) executeFunction(#func, func, num)

int main(int argc, char *argv[]) {
  int num = 5;

  F(square, num);
  F(doubl, num);

  return 0;
}
