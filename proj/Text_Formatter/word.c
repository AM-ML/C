#include <stdio.h>
#include "word.h"

int read_char(void)
{
    int c = getchar();

    if (c == '\t' || c == '\n')
        c = ' ';
    return c;
}

void read_word(char *word, int len)
{
    int c, index = 0; // Initialize index to 0

    while ((c = read_char()) == ' ') ; // Skip leading spaces
    while (c != ' ' && c != EOF)
    {
        if (index < len)
            word[index++] = c;
        c = read_char();
    }

    word[index] = '\0'; // Null-terminate the string
}
