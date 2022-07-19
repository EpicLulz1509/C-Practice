#include <stdio.h>
int main(){
    
    int n, l = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &n);

    while(n != 0){
        l = l + 1;
        n = n / 10;
    }

    printf("Number of digits: %d", l);
    return 0;
}