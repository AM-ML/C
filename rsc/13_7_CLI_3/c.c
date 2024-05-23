#include "lib.h"

int main(int argc, char *argv[])
{
	// info: NULL => #define NULL() ('\0')

	 char **p;

	 for(p = &argv[0]; *p != NULL; p++) // prints command-line arguments
	 	printf("\033[1;96m%ld\033[1;93m: \033[1;92m'%s'\n\033[0;0m", p-&argv[0]+1, *p);

	return 0;
}