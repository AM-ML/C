#include "lib.h"

int main(int argc, char *argv[])
{
	cyan();
	#if defined(WIN_32)
	printf("hello, %sWindows %suser.\n", GREEN, CYAN);	
	//...
	
	#elif defined(MAC_OS)
	printf("hello, %sMac %suser.\n", GREEN, CYAN);
	//...

	#elif defined(LINUX)
	printf("hello, %sLinux %suser.\n", GREEN, CYAN);
	// ...

	#endif
	reset();

	return 0;
}