//problemQ89: Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int countCharacterFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    int frequency = countCharacterFrequency(str, ch);
    printf("Frequency of '%c': %d\n", ch, frequency);
    return 0;
}