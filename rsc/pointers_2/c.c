#include <stdio.h>

void pointer_change(int *p)
{
	*p = 4;
}

void change(int p)
{
	p = 3;
}

int main(void)
{
	int i = 5;
	int *p = &i;

	pointer_change(p);
	change(*p); // doesn't work
	change(i); // doesn't work

	printf("%d\n", *p); // prints 4
	printf("%d\n", i); // prints 4

	return 0;
}
