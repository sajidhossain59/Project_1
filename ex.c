#include <stdio.h>
#include <string.h>

#define MAX_AUTHORS 100
#define MAX_NAME_LEN 50

// Define a structure for Author
typedef struct {
    int id;
    char name[MAX_NAME_LEN];
    char nationality[MAX_NAME_LEN];
    int birthYear;
} Author;

int main() {
    // Method 1: Create an array of authors with initialization
    Author authorList[MAX_AUTHORS];
    int authorCount = 0;
    
    // Adding authors to the array
    authorList[0].id = 1;
    strcpy(authorList[0].name, "William Shakespeare");
    strcpy(authorList[0].nationality, "English");
    authorList[0].birthYear = 1564;
    authorCount++;
    
    authorList[1].id = 2;
    strcpy(authorList[1].name, "Jane Austen");
    strcpy(authorList[1].nationality, "English");
    authorList[1].birthYear = 1775;
    authorCount++;
    
    authorList[2].id = 3;
    strcpy(authorList[2].name, "Mark Twain");
    strcpy(authorList[2].nationality, "American");
    authorList[2].birthYear = 1835;
    authorCount++;
    
    authorList[3].id = 4;
    strcpy(authorList[3].name, "Rabindranath Tagore");
    strcpy(authorList[3].nationality, "Indian");
    authorList[3].birthYear = 1861;
    authorCount++;
    
    // Display all authors
    printf("Author List:\n");
    printf("============\n");
    for(int i = 0; i < authorCount; i++) {
        printf("ID: %d\n", authorList[i].id);
        printf("Name: %s\n", authorList[i].name);
        printf("Nationality: %s\n", authorList[i].nationality);
        printf("Birth Year: %d\n", authorList[i].birthYear);
        printf("-------------------\n");
    }
    
    return 0;
}