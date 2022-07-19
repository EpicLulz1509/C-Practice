#include <stdio.h>
int main(){
    
    int n, num = 0, temp;
    
    printf("Enter a number: \n");
    scanf("%d", &n);

    temp = n;

    while(n != 0){
        int r = n % 10;
        num = num * 10 + r;
        n = n / 10;
    }


    if(num == temp)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}