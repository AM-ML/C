#include "lib.h"
#define DEBUG 0

int main(int argc, char *argv[])
{
	int i, j;
	i = 4; j = 2;

	// value of DEBUG is irrelevant.
	
	#if defined(DEBUG) 
	PRINT_INT(i);
	PRINT_INT(j);
	#endif

	return 0;
}