#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[50]="Hello, World!";
    char b[50]="Hello, world!";
    printf("strcmp(a, b) = %d\n", strcmp(a, b));
    return 0;

}