//problem: Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main(void) {
    int num1, num2, sum, diff, product, quotient;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    printf("Sum = %d, Diff = %d, Product = %d, Quotient = %d\n", sum, diff, product, quotient);
    return 0;
}
