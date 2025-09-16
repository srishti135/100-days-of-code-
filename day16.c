// problem :Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}
// This program converts a given positive integer to its binary representation by checking each bit from the most significant to the least significant.