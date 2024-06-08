#include "lib.h"
#define LOOP for(;;)
#define OPEN {
#define CLOSE }
#define OPENPAR (
#define CLOSEPAR )
#define BREAK break
#define PRINT printf
#define END ;
#define HELLO "hello, world!\n"


int main(int argc, char *argv[])
{
	LOOP OPEN
		PRINT OPENPAR HELLO CLOSEPAR END
		BREAK END
	CLOSE

	return 0;
}