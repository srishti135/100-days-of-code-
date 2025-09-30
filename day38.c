//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], i, j, m, n;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    // Adding two matrices
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("Sum of two matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}