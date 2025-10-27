#include <stdio.h>
int main()
{
    float num1, num2, sum;
    printf("ENTER FIRST NUMBER: ");
    scanf("%f", &num1);

    printf("ENTER SECOND NUMBER: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("sum = %.2f\n", sum);

    return 0;
}
