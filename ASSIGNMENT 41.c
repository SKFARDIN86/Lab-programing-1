#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } else {
    
        if (a > b && a > c)
            printf("The greatest number is %d\n", a);
        else if (b > a && b > c)
            printf("The greatest number is %d\n", b);
        else
            printf("The greatest number is %d\n", c);
    }

    if (a > 0 && b > 0 && c > 0)
        printf("Entered numbers are all positive.\n");
    else if (a < 0 && b < 0 && c < 0)
        printf("Entered numbers are all negative.\n");
    else
        printf("Entered numbers are mixed.\n");

    return 0;
}
