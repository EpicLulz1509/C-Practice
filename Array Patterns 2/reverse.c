//program to accept an array input of integers and the print it's reverse using pointers

#include<stdio.h>

int main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("Enter value for position  %d \n", i);
        scanf("%d", &array[i]);
    }

    //pointer declaration and then initiallization by setting pointer to last element of the array
    int *rev;
    rev = &array[4];

    printf("The array in reverse is: ");

    //reversing the array by accessing the ith element of array from last using the pointer
    for(int i = 0; i < 5; i++){
        printf("%d ",*(rev-i));
    }

    return 0;
}