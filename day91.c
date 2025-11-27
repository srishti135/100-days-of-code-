//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>  
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student student; 
    printf("Enter student's name: ");
    scanf("%49s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}