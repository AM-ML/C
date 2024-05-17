#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[3], t[4] = "123"; // s can handle '12\0' only

	// strcpy(s, t); // CAUSES UNDEFINED BEHAVIOUR
	
	// strncpy(char str1[], const char str2[], int n); 

	strncpy(s, t, sizeof(s)-1); // doesn't terminate string
	s[sizeof(s) - 1] = '\0'; // <- thus necessary 

	puts(s);

	return 0;
}