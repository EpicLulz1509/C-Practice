#include <stdio.h>
 
int main()
{

    int a, b, c, d;
    printf("Enter 3 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c); 
    int sec = (a>b && a>c) ? (b>c ? b : c) : ((b>a && b>c) ? (a>c ? a : c) : (b>a ? b:a));
    printf("Second greatest number: %d", sec);  
    return 0;   
}