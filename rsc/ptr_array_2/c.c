#include <stdio.h>

int main(void)
{
	int a[1] = {1};
	int *p = &a[0];

	printf("%p\n", p); //xyz
	printf("%p\n", &a[1]); //xyz+4

	return 0;
}