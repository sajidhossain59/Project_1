#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int input=0,count=0;
    
    struct Book {
        char title[100];
        char author[100];
    };

    struct Book books[100]; // Array to store books

    while(1){
        printf("----------Welcome to Sylhet Engineering College Library----------\n");
        printf("\n\n");
        printf("Enter an option\n");
        printf("\n1. Add a book\n");
        printf("\n2. Search a book\n");
        printf("\n3. Count book\n");
        printf("\n4. Remove a book\n");
        printf("\n5. Show all available books\n");
        printf("\n6. Exit\n");\
        printf("\n----------------------------------\n");
        printf("\nEnter your option: ");
        scanf("%d",&input);
        printf("\n\n");

        switch (input)
        {
        case 1:
            // Code to add a book
            printf("Enter the title of the book: ");
            scanf(" %[^\n]s", books[count].title); // Read the title with spaces
            printf("Enter the author of the book: ");
            scanf(" %[^\n]s", books[count].author); // Read the author with spaces
            printf("Added a book\n");
            count++;
            printf("\n");
            break;
        case 2:
            // Code to search a book
            int found=0;
            char searchTitle[100];
            printf("Enter the title of the book to search: ");
            scanf(" %[^\n]s", searchTitle); // Read the search title with spaces
            for (int i = 0; i < count; i++) {
                if (strcmp(books[i].title, searchTitle) == 0) {
                    printf("Book found: %s by %s\n", books[i].title, books[i].author);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found.\n");
            }
            printf("\n");
            break;
        case 3:
            // Code to count books
            printf("Total number of books: %d\n", count);
            printf("\n");
            break;
        case 4:
            int got=0;
            char search[100];
            printf("Enter the name of book to remove:");
            scanf(" %[^\n]",search);
            for (int i = 0; i < count; i++) {
            if (strcmp(books[i].title, search) == 0) {
            // Shift all subsequent books left by one position
            for (int j = i; j < count - 1; j++) {
                strcpy(books[j].title, books[j + 1].title);
                strcpy(books[j].author, books[j + 1].author);
            }
            got = 1;
            count--;
            printf("Book '%s' removed successfully.\n", search);
            break;
                 }
             }

            if (!got) {
                printf("Book not found.\n");
            }
            break;
        case 5:
            // Show all available books
            if (count == 0) {
                printf("No books available in the library.\n");
            } else {
                printf("\n========== Available Books ==========\n");
                for(int i = 0; i < count; i++){
                    printf("---------------------------------\n");
                    printf("Title: %s\nAuthor: %s\n", books[i].title, books[i].author);
                    printf("---------------------------------\n");
                }
            }
            printf("\n");
            break; 
        case 6:
            printf("Exiting the program...\n");
            exit(0);
        default:
            printf("Invalid option. Please try again.\n");
            break;
        }
        
    }
}