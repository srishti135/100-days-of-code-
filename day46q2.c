//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

char findFirstRepeatingChar(char *str) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[j] == str[i]) {
                    return str[i];
                }
            }
        }
    }
    return '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char result = findFirstRepeatingChar(str);
    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}
