#include <stdio.h>
enum Meal { BREAKFAST = 1, LUNCH, DINNER };
int getmealprice(enum Meal meal) {
    switch (meal) {
        case BREAKFAST : return 5;
        case LUNCH: return 6;
        case DINNER: return 8;
        default: return 0;
        break;
    }
}
int main()
int mealchoice, quantity;
int totalbill;
{
    printf("Select a meal:\n");
    printf("1. Breakfast ($5)\n");
    printf("2. Lunch ($6)\n");
    printf("3. Dinner ($8)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &mealchoice);

    if (mealchoice < BREAKFAST || mealchoice > DINNER) {
        printf("Invalid meal choice. Please select a valid option.\n");
        return 1;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity. Please enter a positive number.\n");
        return 1;
    }

    totalbill = getmealprice((enum Meal)mealchoice) * quantity;
    printf("Total bill for %d x %s: $%d\n", quantity,
           (mealchoice == BREAKFAST) ? "Breakfast" :
           (mealchoice == LUNCH) ? "Lunch" : "Dinner",  
           totalbill);
    return 0;
}