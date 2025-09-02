#include <stdio.h>

int main()
{
    float l, b;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);

    printf("The area is %f and perimeter is %f\n", l * b, 2 * (l + b));
    return 0;
}