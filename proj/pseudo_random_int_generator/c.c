#include "lib.h"

int main(int argc, char *argv[])
{
	int i;
	printf("Enter Upper Range: ");
	scanf("%d", &i);

	printf("random int: %d\n", get_random_int(0, i));

	return 0;
}