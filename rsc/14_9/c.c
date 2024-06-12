#include "lib.h"
#define CHECK(x, y, n) ((x) >= 0 \
					 && (x) <= ((n) - 1)\
					 && (y) >= 0 \
					 && (y) <= ((n) - 1))


int main(int argc, char *argv[])
{
	int a, b, c, d;
	a = 8;
	b = 9;
	c = 10;
	d = 10;

	PRINT_INT(a);
	PRINT_INT(b);
	PRINT_INT(c);
	PRINT_INT(d);
	PRINT_INT(CHECK(a, b, d));
	PRINT_INT(CHECK(a, c, d));

	return 0;
}