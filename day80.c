//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file;
    struct Student student;
    int n, i;

    // Writing student records to file
    file = fopen("code.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open code.txt for writing!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", student.name, &student.rollNumber, &student.marks);
        fprintf(file, "%s %d %.2f\n", student.name, student.rollNumber, student.marks);
    }

    fclose(file);

    // Reading student records from file
    file = fopen("code.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open code.txt for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");
    printf("-------------------------------\n");

    while (fscanf(file, "%s %d %f", student.name, &student.rollNumber, &student.marks) == 3) {
        printf("%s\t%d\t\t%.2f\n", student.name, student.rollNumber, student.marks);
    }

    fclose(file);

    return 0;
}