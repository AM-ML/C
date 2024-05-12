#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void)
{
	double x, f;
	long i;

	x = 3.14159;

	decompose(x, &i, &f);

	printf("X: %lf\n", x);
	printf("int_part: %ld\n", i);
	printf("frac_part: %lf\n", f);

	return 0;
}

void decompose(double x, long *int_part, double *frac_part)
{
	*int_part = (long) x;
	*frac_part = x - *int_part;
}
