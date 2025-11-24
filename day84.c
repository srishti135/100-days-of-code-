//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status status;
    int choice;

    printf("Enter status code (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    scanf("%d", &choice);

    status = (enum Status)choice;

    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status code.\n");
            break;
    }

    return 0;
}