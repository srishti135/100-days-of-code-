//problem:Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract each digit and add to sum
    while(num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to sum
        num /= 10;       // Remove the last digit
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}