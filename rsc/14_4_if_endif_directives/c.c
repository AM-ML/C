#include "lib.h"
#define DEBUG 1

int main(int argc, char *argv[])
{
	int i, j;
	i = 2; j = 3;

	#if DEBUG
	PRINT_INT(i); // prints debugging info 
	PRINT_INT(j);
	#endif

	return 0;
}