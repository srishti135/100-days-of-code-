//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int matrix[100][100], rows, cols, isDistinct = 1;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Matrix is not square, so diagonal elements cannot be checked for distinctness.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }   
    // Checking for distinct diagonal elements
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; 
                break;
            }
        }
        if (!isDistinct) break;
    }
    if (isDistinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");
    return 0;
}