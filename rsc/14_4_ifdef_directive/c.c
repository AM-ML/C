#include "lib.h"
#define DEBUG 0

int main(int argc, char *argv[])
{
	int i = 4, j = 2;

	#ifdef DEBUG
	PRINT_INT(i);
	PRINT_INT(j);	
	#endif
	
	return 0;
}