#include <stdio.h>

void bbs(int a[], int len)
{
   for(int j = 0; j < len;j++)
      for(int i = 0; i < len -1;i++)
	  if(a[i] > a[i+1])
	  {
	  	int t = a[i];
		a[i] = a[i+1];
		a[i+1] = t;
	  }
}

int main(void)
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int len = sizeof(a)/sizeof(a[0]);

	bbs(a,len);

	for(int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
