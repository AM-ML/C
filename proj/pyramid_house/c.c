#include <stdio.h>
#include <math.h>

void sqr(int n);
void tri(int n);
void pyr(int n);

int main(void)
{
	int n;

	printf("enter n: ");
	scanf("%d", &n);

	// tri(n);sqr(n);

	pyr(floor(n/2)+1);sqr(floor(n/2)+1);

	return 0;
}

void sqr(int n)
{
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n; j++)
			printf("##");
		printf("\n");
	}
}

void tri(int n)
{
	for(int i = 1; i < n+1; i++)
	{
		for(int j = 0; j < i; j++)
			printf("#");
		printf("\n");
	}
}

void pyr(int n)
{
	int i = 1;
	int s = n - i;
	for(int j = 0; j < n; j++)
	{
		for(int k = 0; k < s; k++)
			printf(" ");
		for(int k = 0; k < i; k++)
			printf("##");
		printf("\n");
		i++;s--;
	}
}
