#include <stdio.h>
int main(){
    
     int a, b;
    
    printf("Enter a number: \n");
    scanf("%d", &a);

    printf("Enter second number: \n");
    scanf("%d", &b);

    printf("The numbers divisible by 11 between %d and %d are: \n", a, b);

    while(a!=b){
        int n = a+1;
        if(n % 11 == 0)
            printf("%d \n", n);
        a = a + 1;
    }

    return 0;
}