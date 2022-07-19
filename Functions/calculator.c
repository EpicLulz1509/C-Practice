/*
6. Write a function to take 2 integers and one operator
8 3 + === 11
7 2 * === 14
*/

#include <stdio.h>

float calc(int num1, int num2, char op){
    float r;
    switch(op){
        case '+': r = num1 + num2;
                break;
        case '-': r = num1 - num2;
                break;
        case '*': r = num1 * num2;
                break;
        case '/': r = (1.0 * num1) / num2;
                break;
        case '%': r = num1 % num2;
                break;
        default: r = 0.0;
    }
    return r;
}

int main(){

    int a, b;
    char c;
    float res;
    printf("Enter 2 integers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter operator \n");
    scanf(" %c", &c);

    res = calc(a, b, c);

    printf("Result of the operation %d %c %d  = %f", a, c, b, res);

    return 0;
}