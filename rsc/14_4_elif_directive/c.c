#include "lib.h"
#define DEBUG 0
#define TEST_J 1

int main(int argc, char *argv[])
{
	int i, j;
	i = j = 2;

	#if DEBUG
	PRINT_INT(i);
	PRINT_INT(j);

	#elif TEST_J
	PRINT_INT(j);

	#endif

	return 0;
}