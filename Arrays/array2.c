#include<stdio.h> 

int main(){ 
    int data[5] = {5, 4, 3, 2, 1};
    for(int i = 1; i <= 5; i++)
        printf("Value at %d = %d \n", i, data[i-1]);
    return 0;
    }