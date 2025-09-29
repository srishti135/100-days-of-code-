//problemQ72: Find the sum of all elements in a matrix.
#include <stdio.h>
int sumMatrix(int matrix[100][100], int rows, int cols)
{
    int sum = 0;    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}
int main()
{
    int matrix[100][100], rows, cols;   
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int totalSum = sumMatrix(matrix, rows, cols);
    printf("The sum of all elements in the matrix is: %d\n", totalSum);
    return 0;
}   