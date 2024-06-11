#include "lib.h"

int main(int argc, char *argv[])
{
	printf("%sC99: %s", CYAN, GREEN);

	#if __STDC__
	printf("SUPPORTED\n");

	#else
	printf("NOT SUPPORTED\n");

	#endif

	reset();

	return 0;
}