#include "lib.h"
#define ECHO(s)\
	do {\
		read_line(s, 100);\
		puts(s);\
	} while(0)
// while(0) needs a ; therefore ECHO(s); will input that comma

int main(int argc, char *argv[])
{
	string s = (string) malloc(sizeof(char) * 100);
	bool echo_flag = true;

	printf("Str: ");

	if(echo_flag)
		ECHO(s);
	else
		read_line(s, 100);

	return 0;
}