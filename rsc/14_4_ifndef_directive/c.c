#include "lib.h"


int main(int argc, char *argv[])
{
	int i = 4, j = 2;

	#ifndef DEBUG // equivalent to: #if !defined(DEBUG)	
	PRINT_INT(i);
	PRINT_INT(j);
	#endif

	return 0;
}