#include "lib.h"

#define ECHO(s) {read_line(s, 100);puts(s);}

int main(int argc, char *argv[])
{
	string s = (string) malloc(sizeof(char) * 100);
	bool echo_flag = true;

	if(echo_flag)
		ECHO(s); // becomes {read_line(); puts();}; -> the last ; induced an error
	else
		read_line(s, 100);

	free(s);

	return 0;
}