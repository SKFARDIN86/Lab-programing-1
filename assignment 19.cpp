#include <stdio.h>
int main()
{
    int num;

    printf("Enter 1 for head and 0 for tail: ");
    scanf("%d", &num);

    if(num == 1)
        printf("Head wins.\n");

    if(num == 0)
        printf("Tail wins.\n");

    return 0;
}