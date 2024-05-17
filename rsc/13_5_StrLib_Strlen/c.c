#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];

	// size_t strlen(const char *s);

	int len; // size_t == unsigned int, => thus int can be used

	len = strlen("abc"); // 3
	printf("\033[0;31m\"abc\": \033[0;33m%d\n", len);

	strcpy(str, "abcd");

	len = strlen(str);   // 4
	printf("\033[0;31m\"abcd\": \033[0;33m%d\033[0;0m\n", len);

	return 0;
}