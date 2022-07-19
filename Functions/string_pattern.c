/*
4. Take a string ABCD and print
ABCD
BCD
CD
D
then print
DCBA
CBA
BA
A
*/

#include <stdio.h>



void first(char s[1]){
    printf("First pattern is: \n");

    int len = 0;
    for(len = 0; s[len] != '\0'; len++);

    char *c = &s[0];

    for(int i = len-1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            printf("%c", *(c+j));
        }
        c++;
        printf("\n");
    }
}


void second(char s[1]){
    printf("Second pattern is: \n");

    int len = 0;
    for(len = 0; s[len] != '\0'; len++);

    char *c = &s[len-1];

    for(int i = len-1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            printf("%c", *(c-j));
        }
        printf("\n");
        c--;
    }

}



int main(){

    char word [0];
    printf("Enter string: ");
    scanf("%s", word);

    first(word);
    second(word);

    return 0;
}