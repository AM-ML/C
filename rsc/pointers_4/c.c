#include <stdio.h>

void max_min(int a[], int len, int* max, int* min);

int main(void)
{
	int a[] = {1,2,4,3};
	int len = sizeof(a) / sizeof(a[0]);

	int mx, mn;
	max_min(a,len,&mx,&mn);

	printf("max val: %d\n", mx);
	printf("min val: %d\n", mn);

	return 0;
}

void max_min(int a[],int len, int* mx, int* mn)
{
	*mx = *mn = a[0];

	for(int i = 0; i < len; i++)
	{
		if(a[i] > *mx) *mx = a[i];
		if(a[i] < *mn) *mn = a[i];
	}
}
