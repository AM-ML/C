#include <stdio.h>
//cc
//cc
//cc
int main(void)
{
	int a,b,c,d,a1,b1;

	printf("\033[1;92menter frac: \033[1;93m");
	int resullt = scanf("%d / %d", &a, &b);

	c = a < b? a : b;

	for(int i = 1 ; i <= c; i++)
		if(a % i == 0 && b % i == 0) d = i;

	a1 = a/d;
	b1 = b/d;

	printf("\033[1;92m  Simplest: \033[1;93m%d/%d\n",a1,b1);

	return 0;
}
