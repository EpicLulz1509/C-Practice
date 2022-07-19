//8. Write function to print nth number of fibonecci series

#include <stdio.h>

int fibo_sum(int n){
    int a = 1, b = 1, temp;
    if(n < 2)
        printf("%dth term in fibonacci series is: %d ",n, b);
    else{
        for(int i = 3; i <= n; i++){
            temp = b;
            b = b + a;
            a = temp;
        }
    }
    printf("%dth term in fibonacci series is: %d ",n, b);
}

int main(){

    int n;
    printf("Term: ");
    scanf("%d", &n);

    fibo_sum(n);

    return 0;
}