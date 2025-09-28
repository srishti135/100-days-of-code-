//problem:Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int arr[100], pos, i, n, val;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);
    // Shift elements to the right to make space for the new element
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val; // Insert the new element
    n++; // Increase the size of the array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)  
    {
        printf("%d ", arr[i]);
    }
    return 0;
}