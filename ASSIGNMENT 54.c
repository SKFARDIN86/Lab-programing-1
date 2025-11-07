#include <stdio.h>

int sum(int n) {
    int i, u = 0;
    for (i = 1; i <= n; i++) {
        u = u + (2 * i);
    }
    return u;
}

int main() {
    int n = 5;
    int r = sum(n);
    printf("The sum of the first %d even natural numbers is: %d\n", n, r);
    return 0;
}
