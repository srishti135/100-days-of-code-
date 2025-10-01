//problemQ80: Multiply two matrices.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], i, j, k, r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2) {
        printf("Incompatible matrix dimensions\n");
        return 1;
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // Initialize result matrix
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }
    // Multiply matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product of the matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
