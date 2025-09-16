//problem 30:Q30: Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}