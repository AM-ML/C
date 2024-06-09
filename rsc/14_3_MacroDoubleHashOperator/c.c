#include "lib.h"

// replaces n in ##n with its value and replaces i##n with i1,2,3, etc.
#define MK(n) i##n

int main(int argc, char *argv[])
{
	int MK(7) = 0; // replaced with int i7 = 0;

	printf("%d\n", i7);

	return 0;
}