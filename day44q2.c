//problem:Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
void replaceSpacesWithHyphens(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
int main() {
    char str[100];  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  
    replaceSpacesWithHyphens(str);
    printf("Modified string: %s\n", str);
    return 0;
}