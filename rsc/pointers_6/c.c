#include <stdio.h>

int main(void)
{
	int *b, *c, i;

	int a[11] = {0,1,2,3,4,5,6,7,8,9,10};

	b = &a[1];   //  ptr -> 1
	c = &a[10]; // ptr -> 10
	i = c - b; // int -> 9

	printf("%d\n", i);

	return 0;
}