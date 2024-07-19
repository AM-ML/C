#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"

// Comparison function for qsort
int comparison_function(const void *a, const void *b) {
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;

    // Primary criteria: first letter
    if (str1[0] != str2[0]) {
        return str1[0] - str2[0];
    }

    // Secondary criteria: length of the word
    return strlen(str1) - strlen(str2);
}

// Function to display strings
void display_strs(char *strs[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", strs[i]);
    }
}

int main() {
    char *s[] = {"ali moumneh", "Adnan moumneh", "Ahmad Khan", "ali mortad", "basha jmayyil"};
    int size = sizeof(s) / sizeof(s[0]);

    qsort(s, size, sizeof(char *), comparison_function);

    display_strs(s, size);

    return 0;
}

