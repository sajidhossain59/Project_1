#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(){
    int input=0,count=0;

    while(1){
        printf("----------Welcome to Sylhet Engineering College Library----------\n");
        printf("\n\n");
        printf("Enter an option\n");
        printf("\n1. Add a book\n");
        printf("\n2. Search a book\n");
        printf("\n3. Count book\n");
        printf("\n4. Exit\n");\
        printf("\n----------------------------------\n");
        printf("\nEnter your option: ");
        scanf("%d",&input);
        printf("\n\n");

        switch (input)
        {
        case 1:
            // Code to add a book
            break;
        case 2:
            // Code to search a book
            break;
        case 3:
            // Code to count books
            break;
        case 4:
            printf("Exiting the program...\n");
            exit(0);
        default:
            printf("Invalid option. Please try again.\n");
            break;
        }
        
    }
}