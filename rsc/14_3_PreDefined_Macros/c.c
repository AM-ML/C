#include "lib.h"
#define CHECK_ZERO(divisor)\
	if(divisor == 0) \
		printf("\033[1;91m*** \033[1;96mZERO DIVISION ATTEMPT ON --\033[1;92mLINE %d"\
		"\033[1;96m-- OF --\033[1;92mFILE %s\033[1;96m-- \033[1;91m***\033[0;0m\n"\
		, __LINE__+1, __FILE__);

int main(int argc, char *argv[])
{
	int a, b, c;
	a = 5; b = 0;

	CHECK_ZERO(b);
	c = a / b;

	return 0;
}