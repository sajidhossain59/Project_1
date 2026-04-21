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
        if(input==1){
            
            printf("\n\n");
            count++;
        }
        else if(input==2){

            printf("\n\n");
        }
        else if(input==3){
            printf("Current Book amount is:%d",count);
            printf("\n\n");
        }
        else if(input==4){
            exit(0);
        }
        else{
            printf("Wrong Input\n");
            printf("\n\n");
        }
        
    }
}