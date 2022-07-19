////program to accept an 2D array input of integers and the print it using pointers

#include<stdio.h>

int main(){
    int array[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf("Enter value for position %d %d \n", i, j);
        scanf("%d", &array[i][j]);
        }
    }

    int **point = array;

    printf("The array is: ");

    for(int i = 0; i < 9; i++)
        printf("%d ",*(point+i));

    return 0;
}