//problemQ87: Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void countCharacters(const char str[], int *spaces, int *digits, int *specials) {
    *spaces = *digits = *specials = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            (*spaces)++;
        } else if (isdigit((unsigned char)str[i])) {
            (*digits)++;
        } else if (!isalpha((unsigned char)str[i])) {
            (*specials)++;
        }
    }
}
int main() {
    char str[100];
    int spaces, digits, specials;   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  
    countCharacters(str, &spaces, &digits, &specials);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);
    return 0;
}