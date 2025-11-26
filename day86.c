//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum MenuChoices {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() {
    int choice, num1, num2, result;
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}