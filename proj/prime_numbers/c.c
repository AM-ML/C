#include <stdio.h>

int main(void)
{
	int total, is_prime, index, size, reach;

	printf("enter n primes: ");
	scanf("%d", &total);

	int primes[10000] = {0};
	index = 0;
	reach = 3;
	while(size < total)
	{
		is_prime = 1;
		for(int i = 2; i < reach; i++)
		{
			if(reach % i == 0)
				is_prime = 0;
		}

		if(is_prime != 0)
		{
			primes[index++] = reach;
			printf("%d ", primes[index-1]);
			size++;
		}
		reach++;
	}

	printf("\n");

	return 0;
}