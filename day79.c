//Q129: A file info.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
int main() {
    FILE *inputFile;
    int number;
    int sum = 0;
    int count = 0;
    float average;

    inputFile = fopen("info.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open info.txt for reading!\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(inputFile);

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}