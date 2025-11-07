#include <stdio.h>
#include <stdlib.h>

// Custom strlen implementation
int str_len(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

// Custom strcpy implementation
void str_cpy(char *d, char *s) {
    int i = 0;
    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

// Custom strcmp implementation
int str_cmp(char *s1, char *s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0' || *s2 == '\0') {
            return 0; // Strings are equal
        }
        s1++;
        s2++;
    }
    return *s1 - *s2; // Return difference
}

// Custom strcat implementation
void str_cat(char *d, char *s) {
    int i = 0;
    int j = 0;
    // Find the end of the destination string
    while (d[i] != '\0') {
        i++;
    }
    // Append the source string to the destination
    while (s[j] != '\0') {
        d[i] = s[j];
        i++;
        j++;
    }
    d[i] = '\0';
}

int main() {
    char s1[] = "hello";
    char s2[] = "world";
    char d1[20];
    char d2[20] = "programming";

    // Testing str_len
    printf("Length of \"%s\": %d\n", s1, str_len(s1));

    // Testing str_cpy
    str_cpy(d1, s1);
    printf("Copied string: \"%s\"\n", d1);

    // Testing str_cmp
    char c1[] = "apple";
    char c2[] = "apple";
    char c3[] = "banana";

    if (str_cmp(c1, c2) == 0) {
        printf("\"%s\" and \"%s\" are equal.\n", c1, c2);
    } else {
        printf("\"%s\" and \"%s\" are not equal.\n", c1, c2);
    }

    if (str_cmp(c1, c3) == 0) {
        printf("\"%s\" and \"%s\" are equal.\n", c1, c3);
    } else {
        printf("\"%s\" and \"%s\" are not equal.\n", c1, c3);
    }

    // Testing str_cat
    printf("Original d2: \"%s\"\n", d2);
    printf("s2: \"%s\"\n", s2);
    str_cat(d2, s2);
    printf("Concatenated string: \"%s\"\n", d2);

    return 0;
}
