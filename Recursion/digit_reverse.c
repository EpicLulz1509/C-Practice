//4. Prorgram to display each digit of a number in reverse direction

#include<stdio.h>

void display(int n){
    int r = n % 10;
    if(n == 0)
        return;
    printf("%d ", r);
    display(n/10);
}



int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digits of %d in reverse direction: \n", n);
    display(n);
    return 0;
}