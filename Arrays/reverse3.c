#include<stdio.h> 

int main(){
    int data[8], l = 8, j = 7;
    printf("Enter data : \n");
    for(int i = 0; i < l; i++)
        scanf("%d",&data[i]);
        
    for(int i = 0; i < l/2; i++){
        int temp = data[i];
        if(i % 2 == 0){
            data[i] = data[j-i-1];
            data[j-i-1] = temp;
        }
        else{
            data[i] = data[j-i+1];
            data[j-i+1] = temp;
        }
    }

    printf("Output is: \n");

    for(int i = 0; i < 8; i++)
        printf("%d ", data[i]);
    return 0;
    }