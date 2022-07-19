//2. Write series -> 1/1! + 2!/1 + 1/3! + 4!/1 ... n using factorial

#include<stdio.h>



int factorial(int n) {
    int prod = 1;
    while(n >= 1){
        prod = prod * n;
        n = n - 1;
    }
    return prod;
}



float series(int n){
    float sum = 0.0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0)
            sum = sum + factorial(i)/1.0;
        else
            sum = sum + 1.0/factorial(i);
    }
    return sum;
}



int main(){
    int n;
    printf("Enter the number of terms :  ");
    scanf("%d", &n);
    
    float result = series(n);
    
    printf("The sum of the series is: %lf ",result);
    return 0;
}