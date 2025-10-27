#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum = sum + a;

        // Update values
        int temp = a;
        a = b;
        b = temp + b;
    }

    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}
