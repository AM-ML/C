#include "lib.h"
#define MACRO(x) (2*x)

int f(int x)
{
	return MACRO(x);
}

// undefines macro 'MACRO' so it becomes unusable.
#undef MACRO

int main(int argc, char *argv[])
{
	int x;
	printf("\033[1;96mEnter X: \033[1;92m");
	scanf("%d", &x);

	printf("\033[1;96mDouble X: \033[1;92m%d\n\033[0;0m", f(x));

	return 0;
}
