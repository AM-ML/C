#include <stdio.h>
#include <string.h>
#include "buffer.h"

#define MAX_LINE_LEN 60

char buffer[MAX_LINE_LEN + 1]; // Line buffer
int buffer_len = 0;
int num_words = 0;

void clear_buffer()
{
    buffer[0] = '\0';
    buffer_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    if (num_words > 0)
    {
        buffer[buffer_len] = ' '; // Add a space
        buffer[buffer_len + 1] = '\0'; // Null-terminate
        buffer_len++;
    }

    strcat(buffer, word);
    buffer_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - buffer_len;
}

void write_buffer(void)
{
    int extra_spaces = space_remaining();
    int spaces_to_insert, i;
    int gaps = num_words - 1; // Gaps between words

    for (i = 0; i < buffer_len; i++)
    {
        if (buffer[i] != ' ')
        {
            putchar(buffer[i]);
        }
        else
        {
            putchar(' ');

            // Calculate spaces to insert if there are gaps left
            if (gaps > 0)
            {
                spaces_to_insert = extra_spaces / gaps;
                for (int j = 0; j < spaces_to_insert; j++)
                {
                    putchar(' ');
                }
                extra_spaces -= spaces_to_insert;
                gaps--;
            }
        }
    }
    putchar('\n');
}

void flush_buffer(void)
{
    if (buffer_len > 0)
    {
        puts(buffer);
    }
}
