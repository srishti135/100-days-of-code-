//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};


int main() {
    enum Days day;
    const char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    printf("Days of the week with their integer values:\n");
    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s: %d\n", dayNames[day], day);
    }

    return 0;
}