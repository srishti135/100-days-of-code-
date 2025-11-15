//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int findMissingNumber(int* nums, int numsSize) {
    int total = numsSize * (numsSize + 1) / 2;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    return total - sum;
}
int main() {
    int nums[1000];
    int numsSize;
    printf("Enter the number of elements in the array (n-1): ");
    scanf("%d", &numsSize);     
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int missingNumber = findMissingNumber(nums, numsSize);  
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}