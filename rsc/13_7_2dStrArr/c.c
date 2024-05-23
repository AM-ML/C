#include "lib.h"

int main(void)
{
	 // wasted space on null terminators, "Mars\0\0\0\0"
	 // since Mars doesnt fill column max length of 8
	char planets[][15] = {
		"Mercury", "Venus", "Earth",
		"Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "Pluto",
		"RandomBigString"
	};


	char* planets_ptr[] = {
		"Mercury", "Venus", "Earth",
		"Mars", "Jupiter", "Saturn",
		"Uranus", "Neptune", "Pluto",
		"RandomBigString"
	}; // no wasted space, -> "Mars\0"

	printf("sizeof char[][]: %ld\n", sizeof(planets));
	printf("sizeof *char[]: %ld\n", sizeof(planets_ptr));
	return 0;
}