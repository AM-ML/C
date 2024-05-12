#include <stdio.h>

void store_zeros(int a[], int n) // no array copy initialized of a[]
{
	for(int i = 0;i < n;i++)
		a[i] = 0;
}

void const_store_zeros(const int a[], int n) // READ-ONLY ARRAY INITIALIZED: a[]
{
	// for(int i = 0;i < n;i++)
	// 	a[i] = 0; // ERROR CAUSE
}


int main(void)
{
	int a[] = {1,2,3,4};
	int n = sizeof(a) / sizeof(a[0]);

	store_zeros(a, n);

	for(int i = 0;i < n;i++)
		printf("%d ", a[i]);

	int b[] = {1,2,3,4};

	const_store_zeros(b, n);

	for(int i = 0;i < n;i++)
		printf("%d ", b[i]);

	return 0;
}