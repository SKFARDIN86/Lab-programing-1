#include <stdio.h>
#include <math.h>

int isAutomorphic(int num) 
{
    int square = num * num;
    int temp = num;
    int digits = 0;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }
    int lastDigits = square % (int)pow(10, digits);
    return lastDigits == num;
}

int isNarcissistic(int num) 
{
    int temp = num, sum = 0, digits = 0;
    while (temp > 0) 
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) 
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num, choice;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Choose option:\n");
    printf("1. Check Automorphic number\n");
    printf("2. Check Narcissistic number\n");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        if (isAutomorphic(num))
            printf("%d is an Automorphic number.\n", num);
        else
            printf("%d is NOT an Automorphic number.\n", num);
    }
    else if (choice == 2) 
    {
        if (isNarcissistic(num))
            printf("%d is a Narcissistic number.\n", num);
        else
            printf("%d is NOT a Narcissistic number.\n", num);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }

    return 0;
}