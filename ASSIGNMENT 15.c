#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the coefficients of real quad ax^2 + bx + c: ");
    scanf("%d %d %d", &a, &b, &c);

    float root1, root2;
    root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("The roots are %f and %f\n", root1, root2);
    return 0;
}
