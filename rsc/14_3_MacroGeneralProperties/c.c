#include "lib.h"
#define MK_MAX(type) \
type type##_max(type x, type y)\
{\
	return x > y? x : y;\
}

MK_MAX(int);

int main(int argc, char *argv[])
{
	int i, j;
	i = 4; j = 5;

	PRINT_INT(int_max(i, j));

	return 0;
}