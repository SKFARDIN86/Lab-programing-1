#include <stdio.h>

void sum_mat(int r, int c, int m1[][c], int m2[][c], int s[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void print_mat(int r, int c, int m[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int r = 3, c = 3;
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int m3[3][3];

    printf("Matrix 1:\n");
    print_mat(r, c, m1);

    printf("Matrix 2:\n");
    print_mat(r, c, m2);

    sum_mat(r, c, m1, m2, m3);

    printf("Sum of matrices:\n");
    print_mat(r, c, m3);

    return 0;
}
