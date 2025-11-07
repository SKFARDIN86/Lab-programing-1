#include <stdio.h>

int linear_search(int arr[], int n, int t) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == t) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 30;
    int r = linear_search(arr, n, t);

    if (r != -1) {
        printf("Element %d is present at index %d\n", t, r);
    } else {
        printf("Element %d is not present in the array\n", t);
    }

    t = 60;
    r = linear_search(arr, n, t);

    if (r != -1) {
        printf("Element %d is present at index %d\n", t, r);
    } else {
        printf("Element %d is not present in the array\n", t);
    }

    return 0;
}
