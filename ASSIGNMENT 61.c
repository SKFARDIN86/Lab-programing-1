#include <stdio.h>

void transpose(int r, int c, int m[][c], int tr[][r]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            tr[j][i] = m[i][j];
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
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int t[3][3];

    printf("Original Matrix:\n");
    print_mat(r, c, m);

    transpose(r, c, m, t);

    printf("Transposed Matrix:\n");
    print_mat(c, r, t);

    return 0;
}
