//problem:Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main(void) {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}