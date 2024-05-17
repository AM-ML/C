#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[15] = "Str example.", t[150];

	strcpy(t, s);

	puts(t);

	return 0;
}