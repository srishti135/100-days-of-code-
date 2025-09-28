//problem:Q70: Rotate an array to the right by k positions.
#include <stdio.h>
void rotate(int arr[], int n, int k)
{
    int temp[100];
    for(int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[100], n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    rotate(arr, n, k);
    printf("Array after rotation: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}