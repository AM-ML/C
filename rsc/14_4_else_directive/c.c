#include "lib.h"

int main(int argc, char *argv[])
{
	int i = 2; bool i_is_even = 1;

	green();
	#if i_is_even // #if doesn't work on variable conditions like #if i % 2 == 0
	printf("i %sis even.\n", CYAN);

	#else
	printf("i %sis odd.\n", CYAN);

	#endif
	reset();

	return 0;
}