//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    char fileName[100];
    char newLine[256];
    FILE *file;

    printf("Enter the file name to append text: ");
    scanf("%s", fileName);

    file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the text to append (max 255 characters): ");
    getchar(); 
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, file);

    fclose(file);

    printf("Text appended to %s successfully.\n", fileName);
    return 0;
}