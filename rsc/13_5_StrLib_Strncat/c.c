#include <stdio.h>
#include <string.h>


int main(void)
{
	char s[5] = "abc", t[100] = "def"; // s can handle 'abcd\0';

	// strcat(s, t); UNDEFINED BEHAVIOUR [EXCEEDS SIZE OF s[]];

	strncat(s,t, sizeof(s) - strlen(s) - 1); // 5 - 3 - 1 = 1

	puts(s);

	return 0;
}