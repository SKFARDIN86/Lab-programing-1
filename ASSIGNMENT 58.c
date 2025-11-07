#include <stdio.h>

void find_max_min(int a[], int n, int *mx, int *mn) {
    *mx = a[0];
    *mn = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *mx) {
            *mx = a[i];
        }
        if (a[i] < *mn) {
            *mn = a[i];
        }
    }
}

int main() {
    int arr[] = {12, 5, 90, 3, 67, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_e, min_e;

    find_max_min(arr, n, &max_e, &min_e);

    printf("Maximum element: %d\n", max_e);
    printf("Minimum element: %d\n", min_e);

    return 0;
}
