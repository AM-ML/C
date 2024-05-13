#include <stdio.h>

int read_line(char str[], int n);

int main(void)
{
	char str[1000]; int n = 1000;

	printf("Str: ");
	(void) read_line(str, n);

	puts(str);

	return 0;
}

int read_line(char str[], int n)
// str: input holder
// n: maximum char to input
// int return: num of char read/stored in str (not always useful)
// rules: [1] return if getchar == '\n', [2] don't skip wp, [3] truncate excess char 
{
	int c, i = 0;

	while((c = getchar()) != '\n') // getchar: returns ASCII of char hence: int c
		if(i < n) // NO ERROR HANDLING (INCASE OF I >= N) HENCE STACK COULD STOP PROGRAM
			str[i++] = c;
	str[i] = '\n'; // terminates str & truncates excess chars if exist
	return i;
}