#include<stdio.h> 

int main(){
    int data[8], l = 8, j = 7, temp = 0;
    printf("Enter data : \n");
    for(int i = 0; i < l; i++)
        scanf("%d",&data[i]);
        
    for(int i = 0; i < 7; i++){
        temp = data[i];
        data[i+1] = data[i+1] + temp;
    }

    printf("Output is: \n");

    for(int i = 0; i < 8; i++)
        printf("%d ", data[i]);
    return 0;
    }