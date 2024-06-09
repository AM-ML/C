#include "lib.h"
#define PRINT_INT(n) printf(#n " = %d\n", n)

int main(int argc, char *argv[])
{
	int i, j;
	i = 4; j = 2;

	PRINT_INT(i/j);

	return 0;
}