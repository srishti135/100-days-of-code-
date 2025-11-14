//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
int areAnagrams(char* s, char* t) {
    int count[26] = {0};
    int n = strlen(s);
    int m = strlen(t);

    if (n != m) {
        return 0; 
    }

    for (int i = 0; i < n; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }

    return 1; 
}
int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; 
    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = 0;
    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}