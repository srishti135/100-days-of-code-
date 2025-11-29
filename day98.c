//Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
    float height;
};  
int areIdentical(struct Person p1, struct Person p2) {
    return (strcmp(p1.name, p2.name) == 0) && (p1.age == p2.age) && (p1.height == p2.height);
}
int main() {
    struct Person person1, person2;
    printf("Enter details for Person 1:\n");
    printf("Name: ");
    scanf("%49s", person1.name);
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("Height: ");
    scanf("%f", &person1.height);

    printf("\nEnter details for Person 2:\n");
    printf("Name: ");
    scanf("%49s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("Height: ");
    scanf("%f", &person2.height);

    if (areIdentical(person1, person2)) {
        printf("\nThe two persons are identical.\n");
    } else {
        printf("\nThe two persons are not identical.\n");
    }
    return 0;
}