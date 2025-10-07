#include <stdio.h>

int main() {
    char str[5];  // Declare an array to hold the input string

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input until the first space or newline

    printf("You entered: %s\n", str);

    return 0;
}