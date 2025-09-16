//problem:Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n;

    // Calculate the sum of the cubes of each digit
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if (result == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
