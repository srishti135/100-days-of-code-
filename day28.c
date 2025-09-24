//problem:Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i, j, isPrime;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}