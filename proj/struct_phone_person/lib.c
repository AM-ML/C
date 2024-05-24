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

// char* strLower(char *str)
// {
//     int len = strlen(str);
//     char *s = malloc(len + 1); // Allocate memory for the new string

//     if (s == NULL) // Check if memory allocation was successful
//         return NULL;

//     strcpy(s, str);

//     for (int i = 0; i < len; i++) {
//         s[i] = tolower((unsigned char) s[i]); // Use tolower for better readability
//     }

//     return s;
// }

char* strLower(const char *str)
{
	int len = strlen(str);
	char *s = malloc(len+1);

	if(s == NULL)
		return NULL;

	strcpy(s, str);

	for(int i = 0 ; i < len; i ++)
		if(s[i] < 91)
			s[i] += 32;

	return s;
}