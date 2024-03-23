#include <stdio.h>

void qs(int a[], int low, int high)
{
	if(low >= high) return;

	int middle = split(a,low,high);
	qs(a,low,middle-1);
	qs(a,middle+1,high);
}

int split(int a[], int low, int high)
{
	int pivot = a[low];

	for(;;)
	{
		while(low < high && pivot <= a[high])
			high--;
		if(low >= high) break;

		a[low++] = a[high];

		while(low < high && pivot >= a[low])
			low++;
		if(low >= high) break;

		a[high--] = a[low];
	}

	a[high] = pivot;
	return high;
}

int main(void)
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int len = 10;

	qs(a,0,len-1);

	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
