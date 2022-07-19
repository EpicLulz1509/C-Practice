//program to accept an array input of integers and the print it using pointers

#include<stdio.h>

int main(){
    //array declaration
    int array[5];

    //array input
    for(int i = 0; i < 5; i++){
        printf("Enter value for position %d \n", i);
        scanf("%d", &array[i]);
    }

    //pointer declaration and then initiallization by setting pointer to first element of the array
    int *point;
    point = &array[0];

    printf("The array is: ");

    //printing the array using a pointer
    //done by printing the value stored in ith place of array which is accessed by the pointer 
    for(int i = 0; i < 5; i++){
        printf("%d ",*(point+i));
    }

    return 0;
}