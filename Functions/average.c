//1. Write function to accept 3 numbers and give average

#include <stdio.h>

float fibo_sum(int num1, int num2, int num3){
    float r;
    r = (num1 + num2 + num3)/3.0;
    return r;
}

int main(){

    int a, b, c;
    float res;
    printf("Enter 3 integers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    res = fibo_sum(a, b, c);

    printf("Average of three nos %d, %d and %d is: %f", a, b, c, res);

    return 0;
}