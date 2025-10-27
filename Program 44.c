#include<stdio.h>
int main()
{
    int n, d1, d2, sum, product;
    printf("Enter a number:- ");
    scanf("%d", &n);
    if(n < 10 || n > 99)
    {
        printf("Not a two digit number\n");
        return 0;
    }
    d1 = n / 10;
    d2 = n % 10;
    sum = d1 + d2;
    product = d1 * d2;
    if(sum + product == n)
        printf("Special 2-digit number");
    else
        printf("Not a special 2-digit number");
    return 0;
}