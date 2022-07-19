#include <stdio.h>
int main(){
    
     int a, b, sum = 0;
    
    printf("Enter a number: \n");
    scanf("%d", &a);

    printf("Enter second number: \n");
    scanf("%d", &b);

    int n = a+1;

    while(n!=b){
        int i = 2;
        while(i != n){
            if(n / i == i && n % i == 0){
                sum = sum + n;
                //printf("%d  %d \n", i, sum);
                break;
            }
            i = i + 1;
        }
        n = n + 1;
    }

    printf("The sum of perfect square numbers between %d and %d is: %d", a, b, sum);

    return 0;
}