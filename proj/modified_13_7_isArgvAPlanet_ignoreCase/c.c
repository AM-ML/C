#include "lib.h"

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
	char *planets[] = { // ordered from closest -> furthest from the sun
			"Mercury", "Venus", "Earth",
			"Mars", "Jupiter", "Saturn",
			"Uranus", "Neptune", "Pluto"
		};

	int i, j;

	for (i = 1; i < argc; i++)  // index for all arguments except program name
	{
		if (argv[i][0] > 97) // if 1st letter is lower-case (>97 in ASCII)
			argv[i][0] -= 32; // convert to upper-case to match array (65<char<90 in ASCII)
		
		for (j = 0; j < NUM_PLANETS; j++) // index for all planets array
			if (strcmp(argv[i], planets[j]) == 0) // tests if each argument is a planet. 
			{
				printf("\033[1;92m%s \033[1;96mis planet \033[1;92m%d\033[1;96m\n", argv[i], j + 1);
				break;
			}

		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	return 0;
}