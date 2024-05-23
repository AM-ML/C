#include "lib.h"

int main(int argc, char *argv[])
{
	char smallest_word[21], longest_word[21], current_word[21];
	int word_length, min_length = 20, max_length=1;

	for(;;)
	{
		printf("\033[1;96mWord:\033[1;92m ");
		read_line(current_word, 20);

		word_length = strlen(current_word);

		if(word_length < min_length)
		{
			min_length = word_length;
			strcpy(smallest_word, current_word);
		}

		if(word_length > max_length)
		{
			max_length = word_length;
			strcpy(longest_word, current_word);
		}

		if(word_length == 4)
			break;
	}

	printf("\n\033[1;91m========================================\n\n");
	printf("\033[1;96mSmallest Word: \033[1;92m%s\033[0;0m\n", smallest_word);
	printf("\033[1;96mLargest  Word: \033[1;92m%s\033[0;0m\n\n", longest_word);
	printf("\033[1;91m========================================\n\n\033[0;0m");


	return 0;
}