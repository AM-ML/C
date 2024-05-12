#include <stdio.h>
#define N 4
int sum(int a[], int len);

int main(void)
{
	int a[N] = {4,4,4,4};

	int a_sum = sum(a,N);

	printf("sum: %d\n", a_sum);

	return 0;
}

int sum(int a[], int len)
{
	int a_sum = 0;
	for(int *p = &a[0]; p < &a[len]; p++)
		a_sum += *p;

	return a_sum;
}