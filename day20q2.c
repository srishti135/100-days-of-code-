// problem:Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

void ones_complement(char binary[]) {
    int length = strlen(binary);
    
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
}

int main() {
    char binary[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 1; 
        }
    }

    ones_complement(binary);

    printf("1's complement: %s\n", binary);

    return 0;
}
