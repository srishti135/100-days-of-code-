//Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Day {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main() {
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);
    return 0;
}