#include <stdio.h>

int main() {
    int age, ch;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        ch = 1;
    else
        ch = 2;

    switch (ch) {
        case 1:
            printf("You are eligible to vote.\n");
            break;
        case 2:
            printf("You are not eligible to vote.\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}