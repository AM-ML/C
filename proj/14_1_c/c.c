#include "lib.h"

// 1 if product of x, y < 100, else 0
#define PROD(x, y) (((x) * (y)) < 100 ? 1 : 0)

int main(int argc, char *argv[])
{
	int i = 24, j = 4;

	PRINT_INT(i);
	PRINT_INT(j);

	printf("\n");

	PRINT_INT(PROD(i, j));

	return 0;
}