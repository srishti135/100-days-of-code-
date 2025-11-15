//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int findRepeatedElement(int* nums, int numsSize) {
    int seen[10000] = {0}; // Assuming the numbers are in the range 0 to 9999
    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i];
        }
        seen[nums[i]] = 1;
    }
    return -1; // This line should never be reached if input is valid
}
int main() {
    int nums[1000];
    int numsSize;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);     
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }       
    int repeatedElement = findRepeatedElement(nums, numsSize);
    printf("The repeated element is: %d\n", repeatedElement);
    return 0;
}   