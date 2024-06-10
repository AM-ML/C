#include "lib.h"
#define JOIN(x,y,z) x##y##z;

int main(int argc, char *argv[])
{
		int JOIN(a, b, c);
		int JOIN(a,,c);
		int JOIN(,,c);
		// int abc, ab, ac, c; 

		abc = ac = c = 123;
		
		PRINT_INT(c);	
		PRINT_INT(ac);	
		PRINT_INT(abc);	

	return 0;
}