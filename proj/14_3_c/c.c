#include "lib.h"
#define DOUBLE(x) (2 * (x))

int main(int argc, char *argv[])
{
	int x = 5;

	PRINT_INT(x);
	PRINT_INT(DOUBLE(x));
	PRINT_INT(2*DOUBLE(x));	

	return 0;
}