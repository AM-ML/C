#include <stdio.h>

#define C2F(c) (c*1.8+32)

int main(int argc, char *argv[])
{
	int c, f;
	printf("\033[1;96m%11s: \033[1;92m", "Celsius");	
	scanf("%d", &c);

	f = C2F(c);

	printf("\033[1;96mFahrenheint: \033[1;92m%d\n\033[0;0m", f);

	return 0;
}