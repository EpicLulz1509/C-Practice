#include <stdio.h>
int main(){
    
     int i = 1;
    float n, sum = 0.0;

    printf("Enter a number: \n");
    scanf("%f", &n);


    while(n >= 2.0){
        int j = 1;
        float fact = 1.0;
        while(j <= n-1){
            fact = fact * j;
            j = j + 1;
        }
        sum = sum + (n+0.0)/fact;
        n = n - 1.0;
    }   

    printf("Sum = %f", sum);

    return 0;
}