#include <stdio.h>

int main(int argc, char const *argv[]) {
	char c, buff[1000], *index = buff;

	printf("\033[0;31mEnter msg: \033[0;33m");
	while(c != '\n')
	{
		c = getchar();
		*index++ = c;
	}
	index-=2; printf("\033[1;92m|\033[0;31mReversal: \033[0;33m");
	while(index >= buff)
		printf("%c", *index--);
	printf("\n\033[0;0m");

	return 0;
}
