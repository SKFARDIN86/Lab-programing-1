#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("The first number is greater.");
    else if (num2 > num1)
        printf("The second number is greater.");
    else
        printf("Both numbers are equal.");

    return 0;
}
