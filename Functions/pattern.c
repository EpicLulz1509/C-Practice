/*
7. Take an integer(rows) and character input to output the following
****
***
**
*
*/
#include <stdio.h>



void pattern(int n, char ch){
    printf("Pattern: \n");

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("%c ", ch);    
        }    
        printf("\n");
    }
}



int main(){
    int r;
    char ch;
    printf("Enter no of terms: ");
    scanf("%d", &r);
    printf("Enter character: ");
    scanf(" %c", &ch);
    
    pattern(r, ch);

    return 0;
}