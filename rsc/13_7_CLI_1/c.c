#include "lib.h"

int main(int argc, char *argv[])
{
	// points to user arg (name in this case).
	printf("\033[1;96mGreetings \033[1;92m%s!\033[0;0m\n", argv[1]); 

	// argv[0] points to program name.
	printf("\033[1;96mWelcome to \033[1;92m%s\033[0;0m\n", argv[0]); 

	return 0;
}