#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if all numbers are equal
    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    }
    else {
        // Find the greatest number
        if (a > b && a > c)
            printf("%d is the greatest number.\n", a);
        else if (b > a && b > c)
            printf("%d is the greatest number.\n", b);
        else
            printf("%d is the greatest number.\n", c);
    }

    // Check for positive, negative or mixed numbers
    if (a > 0 && b > 0 && c > 0)
        printf("All numbers are positive.\n");
    else if (a < 0 && b < 0 && c < 0)
        printf("All numbers are negative.\n");
    else
        printf("Mixed numbers.\n");

    return 0;
}