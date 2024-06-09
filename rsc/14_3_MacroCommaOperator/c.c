#include "lib.h"
#define CONCnPRINT(s) (strcat((s), "\033[1;91m -GET CONCATENATED\033[0;0m"), puts(s))

int main(int argc, char *argv[])
{
	// technical stuff: allocates extra space for " -GET CONCATENATED"
	string s = (string) malloc(50 * sizeof(char));
	strcpy(s, "random string");

	CONCnPRINT(s);

	return 0;
}