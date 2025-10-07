//problemQ86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    // Check if the string is a palindrome
    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("Not palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}
