#include <stdio.h>

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check if Buzz number or not\n");
    printf("2. Check if Even or Odd\n");
    printf("3. Check if Positive or Negative\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num % 7 == 0 || num % 10 == 7)
                printf("Buzz Number");
            else
                printf("Not a Buzz Number");
            break;

        case 2:
            if (num % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 3:
            if (num > 0)
                printf("Positive");
            else if (num < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
