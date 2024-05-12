#include <stdio.h>
#include <math.h>

int* find_middle(int a[], int len);

int main(void)
{
	int a[] = {1,2,3,4};
	int b[] = {1,2,3,4,5};

	int *m1, *m2, l1, l2;

	l1 = sizeof(a) / sizeof(a[0]);
	l2 = sizeof(b) / sizeof(b[0]);

	m1 = find_middle(a, l1);
	m2 = find_middle(b, l2);

	printf("m1: %d\n", *m1);
	printf("m2: %d\n", *m2);

	return 0;
}

int* find_middle(int a[], int len)
{
	if(len % 2 == 0 )
		return &a[len/2-1];
	else
		return &a[len/2];
}
