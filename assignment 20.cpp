#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check whether whole number or not: ");
    scanf("%d", &num);

    if (num >= 0)
        printf("The number is a whole number.");
    else
        printf("The number is not a whole number.");

    return 0;
}