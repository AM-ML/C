#include "lib.h"
#define N_ELEMS(x) (sizeof((x)) / (sizeof(x[0])))

int main(int argc, char *argv[])
{
	int a[] = {1, 2, 3};

	PRINT_INT((int) N_ELEMS(a));	

	return 0;
}