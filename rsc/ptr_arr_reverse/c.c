#include <stdio.h>
#define N 10

// I/O
// I: 1 2 3 4 5 6 7 8 9 10
// O: 10 9 8 7 6 5 4 3 2 1

int main(void)
{
	int a[N], *p;
	
	printf("\033[0;31mEnter %d numbers: ", N);
	
	for (p = a; p < a + N; p++)
		scanf("%d", p);
	
	printf("\033[0;96mIn reverse order:");
	
	for (p = a + N - 1; p >= a; p--)
		printf(" %d", *p);
	
	printf("\n\033[0;0m");

return 0;
}