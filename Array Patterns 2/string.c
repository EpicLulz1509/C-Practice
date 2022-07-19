////program to accept an string input of 20, split it in 5 equal parts and print each one using pointers

#include<stdio.h>

int main(){

    //declaring an array of 20 elements, but then setting it to null
    //when a string is input only that much space is provided, so no memory wasted
    //by this there are no empty spaces in the array which means garbage values are not printed
    char array[20] = {0};

    //string input
    printf("Enter string of 20 characters: \n");
    scanf("%s", array);

    //finding length of string input
    int len = 0;
    for(len = 0; array[len] != '\0'; len++);

    char *point = array;

    printf("\nThe entered string is ");
    for(int i = 0; i < len; i++)
        printf("%c", *(point+i));

    if(len >= 0){
        printf("\nThe first part of the entered string is ");
        for(int i = 0; i < 4; i++)
            printf("%c", *(point+i));
    }

    if(len >= 4){
        printf("\nThe second part of the entered string is ");
        for(int i = 4; i < 8; i++)
            printf("%c", *(point+i));
    }

    if(len >= 8){
        printf("\nThe third part of the entered string is ");
        for(int i = 8; i < 12; i++)
            printf("%c", *(point+i));
    }

    if(len >= 12){
        printf("\nThe fourth part of the entered string is ");
        for(int i = 12; i < 16; i++)
            printf("%c", *(point+i));
    }

    if(len >= 16){
        printf("\nThe fifth part of the entered string is ");
        for(int i = 16; i < 20; i++)
            printf("%c", *(point+i));
    }

    return 0;
}
