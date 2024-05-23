#include "lib.h"

int main(int argc, char *argv[])
{
	 int i;

	 for(i = 0; i < argc; i++) // prints command-line arguments
	 	printf("\033[1;96m%d\033[1;93m: \033[1;92m'%s'\n\033[0;0m", i+1, argv[i]);

	return 0;
}