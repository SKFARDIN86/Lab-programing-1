#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int l = 0;
    int r = strlen(s) - 1;

    while (r > l) {
        if (s[l++] != s[r--]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char s1[] = "madam";
    char s2[] = "hello";

    if (is_palindrome(s1)) {
        printf("\"%s\" is a palindrome.\n", s1);
    } else {
        printf("\"%s\" is not a palindrome.\n", s1);
    }

    if (is_palindrome(s2)) {
        printf("\"%s\" is a palindrome.\n", s2);
    } else {
        printf("\"%s\" is not a palindrome.\n", s2);
    }

    return 0;
}
