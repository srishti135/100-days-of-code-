//Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void writeEmployeeToFile(const char *filename, struct Employee emp) {
    FILE *file = fopen(filename, "ab"); 
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
}
void readEmployeesFromFile(const char *filename) {
    FILE *file = fopen(filename, "rb"); 
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }
    struct Employee emp;
    printf("\nEmployee Details from File:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", emp.name, emp.id, emp.salary);
    }
    fclose(file);
}
int main() {
    struct Employee emp;
    const char *filename = "employees.dat";     
    printf("Enter Employee Name: ");
    scanf("%49s", emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    writeEmployeeToFile(filename, emp);
    readEmployeesFromFile(filename);
    return 0;
}