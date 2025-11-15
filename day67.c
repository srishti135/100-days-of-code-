//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>
void mergeSortedArrays(int* arr1, int size1, int* arr2, int size2, int* mergedArr) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}
int main() {
    int arr1[1000], arr2[1000], mergedArr[2000];
    int size1, size2;
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &size1);     
    printf("Enter the elements of the first sorted array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &size2);     
    printf("Enter the elements of the second sorted array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    mergeSortedArrays(arr1, size1, arr2, size2, mergedArr);
    printf("Merged sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    return 0;
}