#include "lib.h"

char *strcat(char *s1, const char *s2)
{
	char *p = s1; // ptr index

	while (*p) // make ptr point to null terminator
		p++; 

	while (*p++ = *s2++) ; // removes 1st \0 and adds s2, then adds \0 at the end 

	return s1;
}

int main(void)
{
	char s1[10] = "abc", s2[] = "def";

	strcat(s1, s2);

	puts(s1);

	return 0;
}