#include "lib.h"
#define TOUPPER(c) ('a' <= c && c <= 'z'? c - 'a' + 'A': c)

int main(int argc, char *argv[])
{
	char c = 'd';	

	printf("%c\n", TOUPPER(c));

	return 0;
}