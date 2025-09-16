#include <stdio.h>

int main()
{
    int a, b, i, j, flag;

    printf("Enter the lower limit: ");
    scanf("%d", &a);

    printf("Enter the upper limit: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        if (i < 2)   // 0 and 1 are not prime
            continue;

        flag = 0;  // assume prime

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1; // not prime
                break;
            }
        }

        if (flag == 0)
            printf("%d is a prime number.\n", i);
        else
            printf("%d is not a prime number.\n", i);
    }

    return 0;
}