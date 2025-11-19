//Q127: Write a program that reads text from info.txt, converts all lowercase letters to uppercase, and writes the result to code.txt.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("info.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open info.txt for reading!\n");
        return 1;
    }

    outputFile = fopen("code.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open code.txt for writing!\n");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Conversion complete. Check code.txt for results.\n");
    return 0;
}