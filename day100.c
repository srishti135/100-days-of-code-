//Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Book {
    char title[100];
    char author[50];
    int pages;
};  
void displayBookDetails(struct Book *b) {
    printf("\nBook Details:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Pages: %d\n", b->pages);
}
int main() {
    struct Book myBook;
    struct Book *bookPtr = &myBook;
    printf("Enter Book Title: ");
    scanf("%99s", bookPtr->title);
    printf("Enter Book Author: ");
    scanf("%49s", bookPtr->author);
    printf("Enter Number of Pages: ");
    scanf("%d", &bookPtr->pages);   
    displayBookDetails(bookPtr);
    return 0;
}
    