#include "lib.h"
#define SCALE(x) (x*10)

int main(int argc, char *argv[])
{
	int i = 10;

	// intended -> (i+1) * 10 = 11 * 10 = 110
	PRINT_INT(SCALE(i+1)); // macro operations -> i + 1 * 10 = 10 + 1 * 10 = 10 + 10 = 20

#undef SCALE
#define SCALE(x) ((x) * 10)

	PRINT_INT(SCALE(i+1)); // macro -> (i+1) * 10 = (10 + 1) * 10 = 11 * 10 = 110

	return 0;
}