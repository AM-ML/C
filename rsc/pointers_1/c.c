#include <stdio.h>

int main(void)
{
	int a = 599;
	int *p = &a;

	printf("p_addr: %p\np_val: %d\na_val: %d\n", &p, *p, a);

	return 0;
}
