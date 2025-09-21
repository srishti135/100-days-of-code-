/*problem;Q49: Write a program to print the following pattern:
5
45
345
2345
12345

*/
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = rows; i >= 1; i--) {       
        for (int j = i; j <= rows; j++) {   
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}