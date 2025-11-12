#include <stdio.h>
#include <stdlib.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex addComplexNumbers(struct Complex n1, struct Complex n2) {
    struct Complex result;
    result.real = n1.real + n2.real;
    result.imaginary = n1.imaginary + n2.imaginary;
    return result;
}

int main() {
    struct Complex num1, num2, sum;

    printf("--- Complex Number Addition using Structures ---\n\n");

    printf("Enter details for the First Complex Number (a + bi):\n");
    printf("Enter real part (a): ");
    if (scanf("%f", &num1.real) != 1) {
        printf("Invalid input. Exiting.\n");
        return EXIT_FAILURE;
    }

    printf("Enter imaginary part (b): ");
    if (scanf("%f", &num1.imaginary) != 1) {
        printf("Invalid input. Exiting.\n");
        return EXIT_FAILURE;
    }

    printf("\nEnter details for the Second Complex Number (c + di):\n");
    printf("Enter real part (c): ");
    if (scanf("%f", &num2.real) != 1) {
        printf("Invalid input. Exiting.\n");
        return EXIT_FAILURE;
    }

    printf("Enter imaginary part (d): ");
    if (scanf("%f", &num2.imaginary) != 1) {
        printf("Invalid input. Exiting.\n");
        return EXIT_FAILURE;
    }

    sum = addComplexNumbers(num1, num2);

    printf("\n============================================\n");
    printf("First Number:  %.2f + %.2fi\n", num1.real, num1.imaginary);
    printf("Second Number: %.2f + %.2fi\n", num2.real, num2.imaginary);

    printf("\nThe Sum is:   %.2f ", sum.real);
    if (sum.imaginary >= 0)
        printf("+ %.2fi\n", sum.imaginary);
    else
        printf("- %.2fi\n", -sum.imaginary);

    printf("============================================\n");

    return EXIT_SUCCESS;
}