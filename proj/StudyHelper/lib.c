#include "lib.h"

int read_line(char str[], int n)
{
	char *s = str;
	int c;

	while((c = getchar()) != '\n')
	{
		if(s-str < n)
			*s++ = (char) c;
	}
	*s = '\0';

	return (int) (s-str);
}

int get_random_int(int lower_range, int upper_range)
{
	srandom((unsigned int) time(NULL));

	return (int) (random() % upper_range+1 + lower_range); // returns random int in range of a -> b
}


char* strLower(const char *str)
{
	size_t len = strlen(str);
	char *s = malloc(len+1);

	if(s == NULL)
		return NULL;

	strcpy(s, str);

	for(int i = 0 ; i < len; i ++)
		if(s[i] < 91)
			s[i] += 32;

	return s;
}

char* strUpper(const char *str)
{
	size_t len = strlen(str);
	char *s = malloc(len+1);

	if(s == NULL)
		return NULL;

	strcpy(s, str);

	for(int i = 0 ; i < len; i ++)
		if(s[i] > 96)
			s[i] -= 32;

	return s;
}

char *capitalize(const char *str)
{
	char *s = malloc(strlen(str) + 1);

	strcpy(s, str);

	if(s[0] > 96)
		s[0] -= 32;

	return s;
}

void cyan()
{
	printf("\033[1;96m");
}
void green()
{
	printf("\033[1;92m");
}
void red()
{
	printf("\033[1;91m");
}
void yellow()
{
	printf("\033[1;93m");
}
void reset()
{
	printf("\033[0;0m");
}