//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int matrix[100][100], rows, cols, sum = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Matrix is not square, so diagonal elements cannot be summed.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculating the sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }
    printf("The sum of the main diagonal elements is: %d\n", sum);
    return 0;
}