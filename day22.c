//problemQ43: Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}