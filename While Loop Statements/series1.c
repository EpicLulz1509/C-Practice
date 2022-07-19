#include <stdio.h>
int main(){
    
    int n, i = 1;
    float sum = 0.0;
    
    printf("Enter a number: \n");
    scanf("%d", &n);

    while(i <= n){
        int j = 1, fact = 1;
        while(j <= i){
            fact = fact * j;
            j = j + 1;
        }
        sum = sum + 1.0/(fact+0.0);
        i = i + 1;
    }

    printf("Sum of series = %f", sum);

    return 0;
}