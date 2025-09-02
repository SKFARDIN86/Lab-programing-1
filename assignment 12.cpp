#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, a;
    printf("Enter your principal: ");
    scanf("%f", &p);
    printf("Enter your rate of interest: ");
    scanf("%f", &r);
    printf("Enter your time (in years): ");
    scanf("%f", &t);

    a = p * pow((1 + r / 100), t);

    printf("Your CI annually is: %f\n", a - p);
    return 0;
}