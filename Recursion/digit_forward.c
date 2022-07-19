//3. Prorgram to display each digit of a number in forward direction

#include<stdio.h>

void display(int n){
    int r = n % 10;
    if(n == 0)
        return;
    display(n/10);
    printf("%d ", r);
}



int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digits of %d in forward direction: \n", n);
    display(n);
    return 0;
}