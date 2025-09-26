//problem:Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, digit, maxCount = 0, mostFrequentDigit = -1;
    int count[10] = {0};  // Array to store the count of each digit (0-9)

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count the frequency of each digit
    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    if (mostFrequentDigit != -1) {
        printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    }

    return 0;
}
