#include "lib.h"

// Seeding random number generator only once
static inline void seed_random() {
    static int seeded = 0;
    if (!seeded) {
        srandom((unsigned int) time(NULL));
        seeded = 1;
    }
}

int read_line(char str[], int n) {
    char *s = str;
    int c;

    while ((c = getchar()) != '\n' && s - str < n) {
        *s++ = (char) c;
    }
    *s = '\0';

    return (int)(s - str);
}

int get_random_int(int lower_range, int upper_range) {
    seed_random();
    return (int)(random() % (upper_range - lower_range + 1) + lower_range); // returns random int in range of a -> b
}

char* strLower(const char *str) {
    size_t len = strlen(str);
    char *s = malloc(len + 1);

    if (s == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < len; i++) {
        s[i] = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
    }
    s[len] = '\0';

    return s;
}

char* strUpper(const char *str) {
    size_t len = strlen(str);
    char *s = malloc(len + 1);

    if (s == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < len; i++) {
        s[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 32 : str[i];
    }
    s[len] = '\0';

    return s;
}

char* capitalize(const char *str) {
    size_t len = strlen(str);
    char *s = malloc(len + 1);

    if (s == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < len; i++) {
        s[i] = str[i];
    }

    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 32;
    }

    s[len] = '\0';

    return s;
}

size_t Max_String_Length(char *strings[], size_t size) {
    size_t maxLength = 0;
    for (size_t i = 0; i < size; i++) {
        size_t length = strlen(strings[i]);
        if (length > maxLength) {
            maxLength = length;
        }
    }
    return maxLength;
}
