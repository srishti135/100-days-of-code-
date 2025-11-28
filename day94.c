//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct person {
    char name[50];
    int age;
    float height;
};
void printPerson(struct person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}   
int main() {
    struct person p;

    printf("Enter name: ");
    scanf("%49s", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter height (in cm): ");
    scanf("%f", &p.height);

    printf("\nPerson Details:\n");
    printPerson(p);

    return 0;
}
