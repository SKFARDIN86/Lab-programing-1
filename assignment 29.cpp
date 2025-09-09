#include <stdio.h>

int main()
{
    int unit, bill;
    printf("Enter the units consumed: ");
    scanf("%d", &unit);

    // Conditional logic to calculate the bill based on units consumed
    if (unit > 200)
        bill = unit * 10;   // Units above 200
    else if (unit >= 100)
        bill = unit * 7;    // Units between 100 and 200 (inclusive)
    else
        bill = unit * 5;    // Units below 100

    printf("The bill is: %d\n", bill);
    return 0;
}