//problem:Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insertInSortedArray(int arr[], int *size, int element) {
    int i = *size - 1;

    // Find the correct position for the new element
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    (*size)++;
}

int main() {
    int n, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];  // One extra space for the new element
    printf("Enter the elements of the sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertInSortedArray(arr, &n, element);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
