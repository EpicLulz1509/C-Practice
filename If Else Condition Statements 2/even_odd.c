#include <stdio.h>
int main(){
    printf("Enter a number: \n");
    int a;
    scanf("%d", &a);
    if(a%2 == 0)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}