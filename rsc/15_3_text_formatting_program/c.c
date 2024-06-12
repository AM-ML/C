#include <string.h>
#include "buffer.h"
#include "word.h"
#define MAX_WORD_LEN 20

int main(int argc, char **argv)
{
    char word[MAX_WORD_LEN + 2];
    int word_len;
    clear_buffer();

    for (;;)
    {
        read_word(word, MAX_WORD_LEN + 1);
        word_len = strlen(word);

        if (word_len == 0) // Don't justify the last line buffer
        {
            flush_buffer();
            return 0;
        }

        if (word_len > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';

        if (word_len + 1 > space_remaining())
        {
            write_buffer();
            clear_buffer();
        }
        add_word(word);
    }
}
