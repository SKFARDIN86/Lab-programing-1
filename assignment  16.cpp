#include <stdio.h>

int main()
{
    int num;
    printf("Enter the roll number : ");
    scanf("%d", &num);
    if (num == 100)
        printf("Roll 100 is present.");
    else
        printf("Roll 100 is absent.");
    return 0;
}