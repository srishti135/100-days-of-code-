//problemQ82: Print each character of a string on a new line.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}