#include <stdio.h>

int main() {
    int number;
    int lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Using modulus operator
    lastDigit = number % 10;
    printf("The last digit (using modulus) is: %d\n", lastDigit);

    // Without using modulus operator
    lastDigit = number - (10 * (number / 10));
    printf("The last digit (without modulus) is: %d\n", lastDigit);

    return 0;
}