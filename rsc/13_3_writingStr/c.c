#include <stdio.h>

int main(void)
{
	char str[] = "String Sample...";

	printf("\033[0;31m|\033[0;33m%s\033[0;31m|\033[0;0m\n", str);
	printf("\033[0;31m|\033[0;33m%18s\033[0;31m|\033[0;0m\n", str);
	printf("\033[0;31m|\033[0;33m%-18s\033[0;31m|\033[0;0m\n", str);
	printf("\033[0;31m|\033[0;33m%.6s\033[0;31m|\033[0;0m\n", str); // "String"
	printf("\033[0;31m|\033[0;33m%18.6s\033[0;31m|\033[0;0m\n", str); // "String"
	printf("\033[0;31m|\033[0;33m%-18.6s\033[0;31m|\033[0;0m\n", str); // "String"

	puts(str);

	return 0;
}