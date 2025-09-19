// problem :Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1; 
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    if (num == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }
    
    
    while (num > 0) {
        digit = num % 10;  
        
        
        if (digit % 2 != 0) {
            product *= digit;  
        }
        
        num = num / 10;  
    }


    printf("Product of odd digits: %d\n", product);

    return 0;
}


