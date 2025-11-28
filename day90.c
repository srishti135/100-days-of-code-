// Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender {
    MALE,   
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    enum Gender gender;
};  
int main() {
    struct Person person;

    printf("Enter name: ");
    scanf("%49s", person.name);

    int genderInput;
    printf("Select gender (0: MALE, 1: FEMALE, 2: OTHER): ");
    scanf("%d", &genderInput);
    person.gender = (enum Gender)genderInput;   
    printf("Name: %s\n", person.name);
    printf("Gender: ");
    switch (person.gender) {
        case MALE:
            printf("MALE\n");
            break;      
        case FEMALE:    
            printf("FEMALE\n");
            break;
        case OTHER:
            printf("OTHER\n");
            break;
        default:
            printf("Unknown\n");
            break;    }
    return 0;
}