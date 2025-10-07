//problem:Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main(void) {
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100;
    // Compound Interest = principal * ( (1 + rate/100) ^ time ) - principal
        compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);
    return 0;
}
