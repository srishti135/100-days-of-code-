//problem:Q85: Reverse a string.
#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int n = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}