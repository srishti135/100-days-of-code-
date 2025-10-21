//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
int main() {
    char date[11];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    date[strcspn(date, "\n")] = 0;

    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return 1;
    }

    char newDate[12];
    strncpy(newDate, date, 3); 
    strcpy(newDate + 3, "Apr"); 
    strcpy(newDate + 6, date + 6); 

    printf("Formatted date: %s\n", newDate);
    return 0;
}