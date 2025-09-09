//problem:Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Start with the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;
    lcm = max;

    // Loop until we find the LCM
    while(1) {
        if(lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}