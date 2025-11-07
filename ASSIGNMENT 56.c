#include <stdio.h>

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

void print_fib(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
}

int main() {
    int n = 8;
    printf("Enter the number of terms: \n");
    printf("Fibonacci series:\n");
    print_fib(n);
    return 0;
}
