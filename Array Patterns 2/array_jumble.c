//program to accept an array input of integers if input is 1234567890 output should be 1627384950 using pointers

#include<stdio.h>
int main(){
    //array declaration
    int array[10], ans[10];

    //array input
    for(int i = 0; i < 10; i++){
        printf("Enter value for position  %d \n", i);
        scanf("%d", &array[i]);
    }

    int *front = &array[0];

    int *second;
    second = &array[5];

    //used to put the correct values in the correct place in array ans
    int len = 0;

    for(int i = 0; i < 5; i++){
        ans[len] = *(front+i);
        len++;
        ans[len] = *(second+i);
        len++;
    }
    
    printf("Original: ");
    for(int i = 0; i < 10; i++)
        printf("%d ",*(front+i));

    printf("\nAnswer: ");
    for(int i = 0; i < 10; i++)
        printf("%d ",ans[i]);

    return 0;
}