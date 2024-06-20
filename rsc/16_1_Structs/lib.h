#include <stdio.h>

#define RESET "\033[0;0m"
#define RED "\033[1;91m"
#define CYAN "\033[1;96m"
#define GREEN "\033[1;92m"
#define YELLOW "\033[1;93m"
#define BLUE "\033[1;94m"

#define PRINT_INT(n) printf("\033[1;92m::: " #n " \033[0;34m= \033[1;96m%d\n\033[0;0m", n)
#define TEST(condition, ...) ((condition) ?\
	printf("\033[1;92mPassed: \033[1;96m%s\033[0;0m\n", #condition) : \
	printf(__VA_ARGS__))

typedef char * string;

#define cyan printf("\033[1;96m")
#define yellow printf("\033[1;93m")
#define red printf("\033[1;91m")
#define green printf("\033[1;92m")
#define reset_color printf("\033[0;0m")
