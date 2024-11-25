#include <stdio.h>

int main(void) {
    int n, limit;

    // Input the number and limit.
    printf("\033[1;93menter number (n): \033[1;96m");
    scanf("%d", &n);

    printf("\033[1;93menter limit: \033[1;96m");
    scanf("%d", &limit);

    printf("\033[1;93mMultiples of %d: \033[1;92m", n);

    // Generate multiples of n up to the limit.
    for (int i = 1; i * n <= limit; i++) {
        if (i > 1) {
            printf(", "); // Add a comma after the first multiple.
        }
        printf("%d", i * n);
    }

    printf("\033[0;0m\n");
    return 0;
}

