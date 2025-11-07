#include <stdio.h>

void count_odd_even(int a[], int n, int *o, int *e) {
    *o = 0;
    *e = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            (*e)++;
        } else {
            (*o)++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 5, 89, 63, 12, 1, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int o_count, e_count;

    count_odd_even(arr, n, &o_count, &e_count);

    printf("Occurrence of odd numbers: %d\n", o_count);
    printf("Occurrence of even numbers: %d\n", e_count);

    return 0;
}
