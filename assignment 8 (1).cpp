#include <stdio.h>

int main() {
    float celsius, fahrenheit, resultc, resultf;

    printf("Enter your Celsius: ");
    scanf("%f", &celsius);

    printf("Enter your Fahrenheit: ");
    scanf("%f", &fahrenheit);

    resultc = (fahrenheit - 32) * (5.0 / 9.0);
    resultf = (9.0 / 5.0) * celsius + 32;

    printf("Your Celsius = %.2f\n", resultc);
    printf("Your Fahrenheit = %.2f\n", resultf);

    return 0;
}