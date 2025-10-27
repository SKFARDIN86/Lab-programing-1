#include <stdio.h>
int main() 
{
    int num, isComposite = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) 
    {
        printf("%d is neither Prime nor Composite.\n", num);
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            isComposite = 1;
            break;
        }
    }
    if (isComposite)
        printf("%d is a Composite number.\n", num);
    else
        printf("%d is NOT a Composite number.\n", num);
    return 0;
}
