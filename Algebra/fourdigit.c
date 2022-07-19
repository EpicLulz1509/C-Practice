#include <stdio.h>
 
int main()
{

    int a;
    printf("Enter a four digit number: ");
    scanf("%d", &a);
    printf("First = %d \n", a%10);
    a = a / 10;
    printf("Second = %d \n", a%10);
    a = a / 10;
    printf("Third = %d \n", a%10);
    a = a / 10;
    printf("Fourth = %d \n", a%10);
    return 0;   
}