//problem:Q61: Search for an element in an array using linear search.
#include <stdio.h>
int main ()
{
    int n, i, search, found = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }
    printf("Output: %d\n", found);
    return 0;
}