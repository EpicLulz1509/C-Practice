//3. Write function to print fibonecci series

#include <stdio.h>

int fibo_sum(int n){
    int a = 1, b = 1, temp;
    printf("%d %d ", a, b);
    for(int i = 1; i <= n; i++){
        temp = b;
        b = b + a;
        a = temp;
        printf("%d ", b);
    }
}

int main(){

    int n;
    printf("No of terms: ");
    scanf("%d", &n);

    fibo_sum(n);

    return 0;
}