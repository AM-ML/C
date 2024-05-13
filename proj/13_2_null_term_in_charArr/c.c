#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* is_null(char c);
char* conc(const char* a, const char* b,const char* c,const char* d);

int main(void)
{
	char date[8] = "123"; // 8-1-3 = 4 chars left (theory: 4 filled slots of \0 in array)

	printf("%s\n", is_null(date[3])); // \0?
	printf("%s\n", is_null(date[2])); // "3"

	return 0;
}

char* is_null(char c)
{
	char* r = "\033[0;31m";
	char* n = "\033[0;0m";
	char* g = "\033[0;32m";

	char* t = conc("\\0: ", g, "TRUE", n);
	char* f = conc("!\\0: ", r, "FALSE", n);

	return c == '\0'? 
		t : f;
}

char* conc(const char* a, const char* b,const char* c,const char* d) {
    // Calculate the length of the concatenated string
    size_t len_a = strlen(a);
    size_t len_b = strlen(b);
    size_t len_c = strlen(c);
    size_t len_d = strlen(d);
    size_t len_result = len_a + len_b + len_c + len_d + 1; // +1 for the null terminator

    // Allocate memory for the concatenated string
    char* result = (char*)malloc(len_result * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // Copy the contents of 'a' and 'b' into the result string
    strcpy(result, a);
    strcat(result, b);
    strcat(result, c);
    strcat(result, d);

    return result;
}