/*problem:Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

*/
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {       
        for (int j = 1; j < i; j++) {   
            printf(" ");
        }
        for (int k = i; k <= rows; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;   
}