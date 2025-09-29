//Q71: Read and print a matrix.
#include <stdio.h>
void readMatrix(int matrix[100][100], int rows, int cols)
{
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    } 
}
void printMatrix(int matrix[100][100], int rows, int cols)
{
    printf("The matrix is:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)   
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matrix[100][100], rows, cols;   
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    readMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    return 0;
}   