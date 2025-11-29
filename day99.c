//Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h> 
struct Car {
    char model[50];
    int year;
    float price;
};
int main() {
    struct Car *carPtr = (struct Car *)malloc(sizeof(struct Car));
    if (carPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }   
    printf("Enter Car Model: ");
    scanf("%49s", carPtr->model);
    printf("Enter Car Year: ");
    scanf("%d", &carPtr->year);
    printf("Enter Car Price: ");
    scanf("%f", &carPtr->price);

    printf("\nCar Details:\n");
    printf("Model: %s\n", carPtr->model);
    printf("Year: %d\n", carPtr->year);
    printf("Price: %.2f\n", carPtr->price);

    free(carPtr);
    return 0;
}
