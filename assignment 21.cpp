#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check whether leap year or not: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("The year is a leap year.");
            else
                printf("The year is not a leap year.");
        } else {
            printf("The year is a leap year.");
        }
    } else {
        printf("The year is not a leap year.");
    }

    return 0;
}