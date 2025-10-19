//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100], longestWord[100];
    int i, j, len, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character from fgets
    sentence[strcspn(sentence, "\n")] = 0;

    len = strlen(sentence);
    j = 0;

    for (i = 0; i <= len; i++) {
        if (isalnum(sentence[i])) {
            longestWord[j++] = sentence[i];
        } else {
            longestWord[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
            }
            j = 0;
        }
    }

    printf("Longest word length: %d\n", maxLen);
    return 0;
}
