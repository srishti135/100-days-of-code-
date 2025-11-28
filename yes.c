//WRITE C PROGRAM TO SELECT A MEAL FROM PREDEFINED OPTIONS BREAKFAST,LUNCH,DINNER USING AN ENUMERATED DATATYPE. YOUR PROGRAM SHOULD BE ABLE TO ACCEPT THE QUANTITY ORDERED AND CALCULATE THE TOTAL BILL BY MULTIPLYING THE CORRESPONDING MEAL PRICE WITH QUANTITY.YOUR PROGRAM MUST VALIDATE USER INPUT AND DISPLAY THE FINAL BILL CLEARLY. 
#include <stdio.h>

enum Meal { BREAKFAST = 1, LUNCH, DINNER };
int getMealPrice(enum Meal meal) {
    switch (meal) {
        case BREAKFAST: return 5;
        case LUNCH: return 6;
        case DINNER: return 8;
        default: return 0;
    }
}
int main() {
    int mealChoice, quantity;
    int totalBill;

    printf("Select a meal:\n");
    printf("1. Breakfast ($5)\n");
    printf("2. Lunch ($6)\n");
    printf("3. Dinner ($8)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &mealChoice);

    if (mealChoice < BREAKFAST || mealChoice > DINNER) {
        printf("Invalid meal choice. Please select a valid option.\n");
        return 1;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity. Please enter a positive number.\n");
        return 1;
    }

    totalBill = getMealPrice((enum Meal)mealChoice) * quantity;
    printf("Total bill for %d x %s: $%d\n", quantity,
           (mealChoice == BREAKFAST) ? "Breakfast" :
           (mealChoice == LUNCH) ? "Lunch" : "Dinner",
           totalBill);

    return 0;
}