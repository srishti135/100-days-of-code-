    //Q145: Return a structure containing top student's details from a function.
    #include <stdio.h>
    struct Student {
        char name[50];
        int roll_no;
        float marks;
    };

    struct Student getTopStudent(struct Student students[], int count) {
        struct Student topStudent = students[0];
        for (int i = 1; i < count; i++) {
            if (students[i].marks > topStudent.marks) {
                topStudent = students[i];
            }
        }   
        return topStudent;
    }
    int main() {
        struct Student students[5]; 

        for (int i = 0; i < 5; i++) {
            printf("Enter details for student %d:\n", i + 1);
            printf("Name: ");
            scanf("%49s", students[i].name);
            printf("Roll Number: ");
            scanf("%d", &students[i].roll_no);
            printf("Marks: ");
            scanf("%f", &students[i].marks);
        }

        struct Student topStudent = getTopStudent(students, 5);

        printf("\nTop Student Details:\n");
        printf("Name: %s\n", topStudent.name);
        printf("Roll Number: %d\n", topStudent.roll_no);
        printf("Marks: %.2f\n", topStudent.marks);

        return 0;
    }