//problem:Q74: Find the transpose of a matrix.
#include <stdio.h>
int main()
{
    int matrix[100][100], transpose[100][100], rows, cols;
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
    // Finding the transpose
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("The transpose of the matrix is:\n");
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
