//Q146: Create Employee structure with nested Date structure for joining date and print details.
    #include <stdio.h>

    struct Date {
        int day;
        int month;
        int year;
    };

    struct Employee {
        char name[50];
        int id;
        struct Date joiningDate;
    };

    void printEmployeeDetails(struct Employee emp) {
        printf("Employee Name: %s\n", emp.name);
        printf("Employee ID: %d\n", emp.id);
        printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    }

    int main() {
        struct Employee emp;

        printf("Enter Employee Name: ");
        scanf("%49s", emp.name);
        printf("Enter Employee ID: ");
        scanf("%d", &emp.id);
        printf("Enter Joining Date (DD MM YYYY): ");
        scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

        printf("\nEmployee Details:\n");
        printEmployeeDetails(emp);

        return 0;
    }