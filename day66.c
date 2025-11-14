//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>
void findTwoSum(int* nums, int numsSize, int target, int* index1, int* index2) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *index1 = i;
                *index2 = j;
                return;
            }
        }
    }
    *index1 = -1;
    *index2 = -1;
}
int main() {
    int nums[1000];
    int numsSize, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);     
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    int index1, index2;
    findTwoSum(nums, numsSize, target, &index1, &index2);
    printf("%d %d\n", index1, index2);
    return 0;
}