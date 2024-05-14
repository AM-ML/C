#include <stdio.h>

int count_wp(const char str[]);
int read_line(char str[], int n);

int main(void)
{
	char str[1000]; 
	int n = 1000;

	printf("\033[0;31mStr: \033[0;33m");
	read_line(str, n);

	printf("\033[0;31mwspaces: \033[0;33m%d\n\033[0;0m", count_wp(str));

	return 0;
}

int count_wp(const char str[])
{
	int count = 0;

	for(int i = 0; str[i] != '\0'; i++)
		if(str[i] == ' ')
			count++;

	return count;
}

int read_line(char str[], int n)
{
	int c, i = 0;
	while((c=getchar()) != '\n')
		if(i < n)
			str[i++] = c;
	str[i] = '\0';

	return i;
}