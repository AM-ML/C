#include "lib.h"
#define FUNCTION_CALL() printf("\033[1;96mfunction \033[1;92m%s \033[1;96mwas \033[1;92mcalled...\n\033[0;0m",\
						__func__); // __func__ = function name.
#define FUNCTION_RETURNED() printf("\033[1;96mfunction \033[1;92m%s \033[1;96mhas \033[1;92mreturned...\033[0;0m\n",\
					         __func__); // __func__ = function name.
int add(int a, int b)
{
	FUNCTION_CALL();
	
	// if an error was induced here, the FUNCTION_RETURNED() will not output
	// indicating the location of the error, useful when debugging.

	FUNCTION_RETURNED();
	return a+b;
}

int main(int argc, char *argv[])
{
	int a,b;
	a = b = 2;

	add(a, b);

	return 0;
}