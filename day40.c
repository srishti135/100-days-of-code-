//problemQ79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int a[10][10], i, j, r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal traversal of the matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i + j == r - 1) {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
