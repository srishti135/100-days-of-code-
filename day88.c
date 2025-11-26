//Q138: Print all enum names and integer values using a loop.
#include <stdio.h>  

enum Color {
    RED = 1,
    GREEN,
    BLUE
};

const char* ColorNames[] = {
    "RED",
    "GREEN",
    "BLUE"
};

int main() {
    for (int i = 0; i < 3; i++) {
        printf("%s = %d\n", ColorNames[i], i + 1);
    }
    return 0;
}
