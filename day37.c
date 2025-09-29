//problemQ73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main()
{
    int matrix[100][100], rowSums[100], rows, cols;
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
    for(int i = 0; i < rows; i++)
    {
        rowSums[i] = 0;  // Initialize sum for each row
        for(int j = 0; j < cols; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }
    printf("The sum of each row is:\n");
    for(int i = 0; i < rows; i++)
    {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }
    return 0;
}
