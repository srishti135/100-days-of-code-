//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character from fgets
    name[strcspn(name, "\n")] = 0;

    printf("Initials: ");
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            printf("%c.", name[i]);
        }
    }
    printf(" %s\n", strrchr(name, ' ') + 1);
    return 0;
}
