#include "lib.h"

int main(int argc, char *argv[])
{
	for(int i = argc-1; i > 0; i--)
	{
		printf("\033[1;96m%s ", argv[i]);
	} printf("\033[0;0m\n");

	return 0;
}