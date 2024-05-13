#include <stdio.h>

int get_length(char* s);

int main(void)
{
	char* s = "i like pokemon."; // length: 15

	printf("\033[0;31mstr length: \033[0;33m%d\033[0;0m\n", get_length(s));

	return 0;
}

int get_length(char* s)
{
	int length = 0;
	char *p = s;

	while(*p++ != '\0')
		length++;

	return length;
}