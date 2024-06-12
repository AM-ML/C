#include "lib.h"
#define CUBE(x) x*x*x

int main(int argc, char *argv[])
{
	int x = 2;

	PRINT_INT(x);
	PRINT_INT(CUBE(x));	

	return 0;
}