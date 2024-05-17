#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100], t[100];

	strcpy(s, "abc");
	strcpy(t, "def");

	// strcat(char *str const char *str2);

	strcat(s, t); // s = s + t = "abcdef";

	puts(s);

	return 0;
}