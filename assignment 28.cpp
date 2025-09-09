#include <stdio.h>

int main()
{
    int salary, hra, ta, da;

    printf("Enter the salary: ");
    scanf("%d", &salary);

    if (salary >= 30000)
        hra = (15 * salary) / 100;
    else if (salary >= 15000)
        hra = (20 * salary) / 100;
    else
        hra = (25 * salary) / 100;

    ta = (10 * salary) / 100;
    da = (5 * salary) / 100;

    printf("The HRA is: %d\n", hra);
    printf("The TA is: %d\n", ta);
    printf("The DA is: %d\n", da);

    return 0;
}