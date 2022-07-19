#include<stdio.h>

int main(){
    int data[8];
    printf("Enter data : \n");
    for(int i = 0; i < 8; i++)
        scanf("%d",&data[i]);

    printf("The reverse order is : \n");

    for(int i= 7; i >= 0; i--)
        printf("%d\n",data[i]);

return 0;
}