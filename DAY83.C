//Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main() {
    enum Month month;
    int choice;

    printf("Enter month number (1-12): ");
    scanf("%d", &choice);

    month = (enum Month)choice;

    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days\n");
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days\n");
            break;
        case FEBRUARY:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}