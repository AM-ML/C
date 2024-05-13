#include <stdio.h>

char int_char(int digit);

int main(void)
{
	int digit = 12;
	char c = int_char(digit);

	printf("%c\n", c);

	return 0;
}

char int_char(int digit)
{
	return "0123456789ABCDEF"[digit];
}