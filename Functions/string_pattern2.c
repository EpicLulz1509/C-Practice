/*
AB
---
---
CD
============
============
============
============
EF
******
5. Take number of rows columnns and character as parameters to pass
*/

#include <stdio.h>



void first(){
    int r, c;
    char ch;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);
    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("First pattern: \n CD \n");

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            printf("%c", ch);    
        }    
        printf("\n");
    }
}



void second(){
    int r, c;
    char ch;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);
    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("Second pattern: \n CD \n");

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            printf("%c", ch);    
        }    
        printf("\n");
    }
}



void third(){
        int r, c;
    char ch;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter columns: ");
    scanf("%d", &c);
    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("Third pattern: \n CD \n");

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            printf("%c", ch);    
        }    
        printf("\n");
    }
}



int main(){

    first();
    second();
    third();

    return 0;
}