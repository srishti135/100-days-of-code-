//problem:Q1: Write a program to find the largest of three numbers.
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("Largest number: %d\n", a);
    } else if (b > c) {
        printf("Largest number: %d\n", b);
    } else {
        printf("Largest number: %d\n", c);
    }
    return 0;
}
