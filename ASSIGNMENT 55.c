#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int n1 = 48, n2 = 18;
    int result = gcd(n1, n2);
    printf("Enter two positive integers: \n");
    printf("The GCD of %d and %d is %d\n", n1, n2, result);
    return 0;
}
