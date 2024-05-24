#include "lib.h"
#define C2F(c) (c*1.8+32)
int main(int argc, char *argv[])
{
	int c, f;

	printf("enter c: ");
	scanf("%d", &c);

	f = C2F(c);

	printf("returned: %d\n", f);

	return 0;
}