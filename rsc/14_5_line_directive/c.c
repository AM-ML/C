#include "lib.h"

int main(int argc, char *argv[])
{
	#line 1 "file_1" // following lines start from 1 .. x and are part of file_1.c
	// some code, line: 1.
	// more code, line: 2.
	// ...	  	, line: 3.

	#line 1 "file_2" // following lines start from 1 .. x and are part of file_2.c

	#error THIS ERROR COMES FROM 'file_2.c' AT LINE 2

	return 0;
}