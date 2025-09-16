#include <stdio.h>

int main()
{
    int n, i;
    long long product = 1; // use long long for large factorials

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }

    printf("The factorial of %d is: %lld\n", n, product);

    return 0;
}