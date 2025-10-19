//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams of each other.\n");
    return 0;
}
