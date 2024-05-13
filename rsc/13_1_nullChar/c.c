#include <stdio.h>
#include <string.h>

int main(void)
{
	if (strcmp("", "\0")==0)
	{
		printf("True.\n");
	} 	

	if (strcmp("a", "\0")!=0)
	{
		printf("False.\n");
	}


	return 0;
}