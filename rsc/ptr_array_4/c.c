#include <stdio.h>
#define N 4

int main(void)
{
	int a[N] = {1,2,3,4};

	for(int *p = a; p < a + N; p++)
		printf("%d ", *p);

	printf("\n");

	return 0;
}