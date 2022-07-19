#include <stdio.h>
int main(){
    
     int a, b;
    
    printf("Enter a year: \n");
    scanf("%d", &a);

    printf("Enter second year: \n");
    scanf("%d", &b);

    printf("Leap years between %d and %d are: \n", a, b);

    while(a!=b){
        int n = a+1;
        if((n%4==0 && n%100!=0) || (n%400==0))
            printf("%d \n", n);
        a = a + 1;
    }

    return 0;
}