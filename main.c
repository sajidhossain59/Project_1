#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
};

int main(){
    int input=0,count=0;
    struct Book books[100];
    FILE *file;

    /* ================= FILE READ MODE ================= */

    file = fopen("library.txt","r");
    if(file != NULL){
        while(fscanf(file," %99[^|]|%99[^\n]\n",
            books[count].title,
            books[count].author) == 2){
            count++;
        }
        fclose(file);
    }

    /* ================================================= */

    while(1){

        here:
        printf("----------Welcome to Sylhet Engineering College Library----------\n");
        printf("\n\n");
        printf("Enter an option\n");
        printf("\n1. Add a book\n");
        printf("\n2. Search a book using its title\n");
        printf("\n3. Show available books by Author\n");
        printf("\n4. Count books\n");
        printf("\n5. Remove a book\n");
        printf("\n6. Show all available books\n");
        printf("\n7. Exit\n");

        printf("\n----------------------------------\n");

        printf("\nEnter your option: ");

        if(scanf("%d",&input) != 1){
            printf("Invalid option. Please try again.\n\n");
            while(getchar() != '\n');
            goto here;
        }

        printf("\n\n");
        switch (input) {

        case 1:{

            /* ============ ADD BOOK ============ */

            printf("Enter the title of the book: ");
            scanf(" %[^\n]", books[count].title);
            printf("Enter the author of the book: ");
            scanf(" %[^\n]", books[count].author);
            printf("\n\"%s\" by %s is added successfully\n",
            books[count].title,
            books[count].author);

            /* ============ FILE APPEND MODE ============ */

            file = fopen("library.txt","a");

            if(file != NULL){
                fprintf(file,"%s|%s\n",
                books[count].title,
                books[count].author);
                fclose(file);
            }

            /* ========================================== */
            count++;
            printf("\n");
            break;
        }

        case 2:{
            /* ============ SEARCH BOOK ============ */
            int found=0;
            char searchTitle[100];
            printf("Enter the title of the book to search: ");
            scanf(" %[^\n]s", searchTitle);
            for (int i = 0; i < count; i++) {
                if (strcmp(books[i].title, searchTitle) == 0) {
                    printf("Book found: %s by %s\n",
                           books[i].title,
                           books[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book not found.\n");
            }
            printf("\n");
            break;
        }

        case 3:{

            /* ============ SEARCH BY AUTHOR ============ */

            int tag=0;
            char auth[50];
            printf("Enter Author's name:");
            scanf(" %[^\n]",auth);
            printf("\n");
            for(int i=0;i<count;i++){
                if(strcmp(books[i].author,auth)==0){
                    tag=1;
                }
            }
            if(!tag){
                printf("No book available by %s.\n",auth);
            }

            else{
                printf("====== Available Books by %s ======\n",auth);
                int j=1;
                for(int i=0;i<count;i++){
                    if(strcmp(books[i].author,auth)==0){
                        printf("%d. %s\n",j,books[i].title);
                        j++;
                    }
                }
            }
            printf("\n");
            break;
        }

        case 4:{
            /* ============ COUNT BOOKS ============ */
            printf("Total number of books: %d\n", count);
            printf("\n");
            break;
        }

        case 5:{
            /* ============ REMOVE BOOK ============ */
            int got=0;
            char search[100];
            printf("Enter the name of book to remove:");
            scanf(" %[^\n]",search);
            for (int i = 0; i < count; i++) {
                if (strcmp(books[i].title, search) == 0) {
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

            /* ============ FILE WRITE MODE ============ */
            file = fopen("library.txt","w");
            if(file != NULL){
                for(int i=0; i<count; i++){
                    fprintf(file,"%s|%s\n",
                    books[i].title,
                    books[i].author);
                }
                fclose(file);
            }
            /* ========================================= */
            printf("\n");
            break;
        }

        case 6:{
            /* ============ SHOW ALL BOOKS ============ */
            if (count == 0) {
                printf("No books available in the library.\n");
            }
            else {
                printf("\n========== Available Books ==========\n");
                for(int i = 0; i < count; i++){
                    printf("---------------------------------\n");
                    printf("Title: %s\nAuthor: %s\n",
                           books[i].title,
                           books[i].author);
                    printf("---------------------------------\n");
                }
            }
            printf("\n");
            break;
        }

        case 7:{
            /* ============ EXIT ============ */
            printf("Exiting the program...\n");
            exit(0);
        }

        default:{
            printf("Invalid option. Please try again.\n");
            break;
        }
        }
    }
}