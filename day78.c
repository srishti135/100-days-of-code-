//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inputFile;
    char ch;
    int vowels = 0, consonants = 0;

    inputFile = fopen("info.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open info.txt for reading!\n");
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(inputFile);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}