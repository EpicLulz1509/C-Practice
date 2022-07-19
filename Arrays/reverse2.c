#include<stdio.h>

int main(){
    int data[8], rev[8], j = 7;
    printf("Enter data : \n");
    for(int i = 0; i < 8; i++)
        scanf("%d",&data[i]);

    for(int i = 0; i < 8; i++){
        if(i < 4)
            rev[i] = data[j];
        else
            rev[i] = data[i-4];
        j = j - 1;
    }

    printf("Output is: \n");

    for(int i = 0; i < 8; i++)
        printf("%d ", rev[i]);

return 0;
}