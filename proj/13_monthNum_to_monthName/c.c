#include "lib.h"

int main(int argc, char *argv[])
{
	char *months[] = {
		"January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December"
	};

	char *output_month;
	int month, day, year;

	printf("\033[1;96mEnter Date (\033[1;93mmm/dd/yyyy\033[1;96m): \033[1;92m");
	scanf("%d / %d / %d", &month, &day, &year);

	output_month = months[month-1];

	printf("\033[1;96mYou Entered: \033[1;92m%s %d, %d\n\033[0;0m", output_month, day, year);

	return 0;
}