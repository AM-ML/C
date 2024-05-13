#include <stdio.h>

int main(void)
{
	char str[1000];

	printf("Str: ");
	gets(str); //gets is 'less safe'	

	puts(str);

	return 0;
}