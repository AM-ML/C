#include "lib.h"

size_t strlen(const char s[])
{
	size_t len;

	while(*s++)
		len++;

	return len;
}

int main(void)
{
	printf("%ld\n", strlen("abc"));

	return 0;
}