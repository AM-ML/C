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

int get_random_int(int lower_range, int upper_range)
{
	srandom((unsigned int) time(NULL));

	return random() % upper_range+1 + lower_range; // returns random int in range of a -> b
}