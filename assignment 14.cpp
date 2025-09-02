#include <stdio.h>
#include <math.h>

int main() {
    float p, n;

    printf("Enter a positive number: ");
    scanf("%f", &p);

    printf("Enter a negative number (use sign): ");
    scanf("%f", &n);

    printf("The floor and ceil of positive number %.2f are: %.2f & %.2f respectively\n",
           p, floor(p), ceil(p));

    printf("The floor and ceil of negative number %.2f are: %.2f & %.2f respectively\n",
           n, floor(n), ceil(n));

    return 0;
}