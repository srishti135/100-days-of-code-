//problem;Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main ()
{
    int n, i, positive_count = 0, negative_count = 0, zero_count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);
    return 0;
}