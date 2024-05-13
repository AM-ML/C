#include <stdio.h>

int main(void)
{
	char *p;
	p = "abc";

	printf("%c\n", *++p); // output: b

	return 0;
}