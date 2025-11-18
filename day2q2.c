// problem:Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main(void) {
    float radius, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    const float PI = 3.14;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area=%f, Circumference=%f\n", area, circumference);
    return 0;
}
