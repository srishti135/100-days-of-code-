/*problem:Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


*/
#include <stdio.h>

int main() {
    int i, j;

    // Print upper part of the pattern
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print lower part of the pattern
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}