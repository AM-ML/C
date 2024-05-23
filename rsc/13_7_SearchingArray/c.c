#include "lib.h"

void starts_with(char* arr[], char letter)
{
	for(int i = 0;i < 9;i++)
		if(arr[i][0] == letter)
			printf("\033[1;92m%s \033[1;96mbegins with \033[1;92m%c\033[0;0m\n", arr[i], letter);
}

int main(void)
{
	char* array[] = {
		"Mercury", "Venus", "Earth",
		"Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "Pluto"
	};

	printf("Char: ");
	char c = getchar();

	starts_with(array, c);

	return 0;
}