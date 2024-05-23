#include "lib.h"

int read_line(char str[], int n)
{
	char c, *s = str;

	while((c = getchar()) != '\n')
	{
		if(s-str < n)
			*s++ = c;
	}
	*s = '\0';

	return s-str;
}