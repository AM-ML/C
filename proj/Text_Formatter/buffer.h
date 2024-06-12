#ifndef _BUFFER_H__
#define _BUFFER_H__

/**********************************************************
* clear_buffer: Clears the current line.                    *
**********************************************************/
void clear_buffer(void);


/**********************************************************
* add_word: Adds word to the end of the current line.     *
* 			If this is not the first word on the line,    *
* 			puts one space before word.                   *
**********************************************************/
void add_word(const char *word);


/**********************************************************
* space_remaining: Returns the number of characters left *
*				   in the current line.                  *
**********************************************************/
int space_remaining(void);


/**********************************************************
* write_buffer: Writes the current line with                *
*			  justification.                              *
**********************************************************/
void write_buffer(void);


/**********************************************************
* flush_buffer: Writes the current line without			  *
* 			  justification. If the line is empty, does   *
*			  nothing.                                    *
**********************************************************/
void flush_buffer(void);

#endif