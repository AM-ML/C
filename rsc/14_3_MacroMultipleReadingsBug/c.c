#include "lib.h"
#define max(a, b) (a > b? a: b)

void display(int a, int b)
{
	printf("a: %d\n", a);
	printf("b: %d\n", b);
}

int main(int argc, char *argv[])
{
	int a, b;
	a = b = 1;

	display(a,b);

	// param macros sometimes read arguments more than once, resulting to this bug
	printf("max: %d\n", max(++a,b)); // ++a = 2, max(++a, b) --> 3

	return 0;
}