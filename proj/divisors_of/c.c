#include <stdio.h>
#include <math.h>

int main(void) {
    int n, divisors[1000], count = 0; // Array to store divisors, count for tracking.

    printf("\033[1;93menter n: \033[1;96m");
    scanf("%d", &n);

    // Collect divisors.
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors[count++] = i; // Store divisor `i`.
            if (i != n / i) {
                divisors[count++] = n / i; // Store paired divisor `n / i`.
            }
        }
    }

    // Sort divisors in ascending order using bubble sort (can replace with any sort).
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (divisors[j] > divisors[j + 1]) {
                int temp = divisors[j];
                divisors[j] = divisors[j + 1];
                divisors[j + 1] = temp;
            }
        }
    }

    // Print the sorted divisors.
    printf("\033[1;93mDivisors: \033[1;92m");
    for (int i = 0; i < count; i++) {
        if (i != count - 1)
            printf("%d, ", divisors[i]);
        else
            printf("%d", divisors[i]); // No comma for the last divisor.
    }
    printf("\033[0;0m\n");

    return 0;
}

