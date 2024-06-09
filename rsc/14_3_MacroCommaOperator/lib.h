#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define RESET "\033[1;93m"
#define RED "\033[1;91m"
#define CYAN "\033[1;96m"
#define GREEN "\033[1;92m"
#define YELLOW "\033[1;93m"

#define PRINT_INT(n) printf("\033[1;92m::: " #n " \033[0;34m= \033[1;96m%d\n\033[0;0m", n)

typedef char * string;

static inline void seed_random();
int read_line(char str[], int n);
int get_random_int(int lower_range, int upper_range);
char* strLower(const char *str);
char* strUpper(const char *str);
char* capitalize(const char *str);
size_t Max_String_Length(char *strings[], size_t size);


static inline void cyan() {
    printf("\033[1;96m");
}

static inline void green() {
    printf("\033[1;92m");
}

static inline void red() {
    printf("\033[1;91m");
}

static inline void yellow() {
    printf("\033[1;93m");
}

static inline void reset() {
    printf("\033[0;0m");
}
