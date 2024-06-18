#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define RESET "\033[0;0m"
#define RED "\033[1;91m"
#define CYAN "\033[1;96m"
#define GREEN "\033[1;92m"
#define YELLOW "\033[1;93m"

#define PRINT_INT(n) printf("\033[1;92m::: " #n " \033[0;34m= \033[1;96m%d\n\033[0;0m", n)
#define TEST(condition, ...) ((condition) ?\
	printf("\033[1;92mPassed: \033[1;96m%s\033[0;0m\n", #condition) : \
	printf(__VA_ARGS__))

typedef char * string;

