//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int index[256] = {0};

    for (int end = 0; end < n; end++) {
        start = start > index[(unsigned char)s[end]] ? start : index[(unsigned char)s[end]];
        maxLength = maxLength > (end - start + 1) ? maxLength : (end - start + 1);
        index[(unsigned char)s[end]] = end + 1;
    }

    return maxLength;
}
int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; 
    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", length);
    return 0;
}