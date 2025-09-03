// problem:Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14

int main(void) {
    float radius, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}
