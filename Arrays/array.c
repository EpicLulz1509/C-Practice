#include<stdio.h> 

int main(){ 
    int data[5];
    printf("Enter 5 data values : \n");
    for(int i = 0; i< 5; i++)
        scanf("%d", &data[i]);
    for(int i = 1; i <= 5; i++)
        printf("Value at %d = %d \n", i, data[i-1]);
    return 0;
    }