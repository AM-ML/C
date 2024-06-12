#include "lib.h"

#define ERROR(str, ...) (\
	fprintf(stderr, str, __VA_ARGS__))

int main(int argc, char *argv[])
{
	int index = 5;

	ERROR("RERROR: I = %d\n", index);

	return 0;
}