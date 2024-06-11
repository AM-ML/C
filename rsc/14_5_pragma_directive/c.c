#include "lib.h"

// tells GCC to shutup about 'this variable is unused blah blah blah'
#pragma GCC diagnostic ignored "-Wunused-variable"

// other GCC compiler specific pragmas are documented online by the GNU company.

int main(int argc, char *argv[])
{
	int i = 2; // normally, GCC would say int i is unused, but wont when using this pragma.

	PRINT_INT(i);

	return 0;
}