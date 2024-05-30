#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define RESET "\033[1;93m"
#define RED "\033[1;91m"
#define CYAN "\033[1;96m"
#define GREEN "\033[1;92m"
#define YELLOW "\033[1;93m"

int read_line(char str[], int n);
int get_random_int(int lower_range, int upper_range);
char* strLower(const char *str);
char* strUpper(const char *str);
char *capitalize(const char *str);

void cyan();
void green();
void red();
void yellow();
void reset();