#include <stdio.h>
 
int main()
{

    float n;
    printf("Enter a number: \n");
    scanf("%f", &n);
    int a = (int)n;
    float b = n - a;
    printf("%d \n", a);
    printf("%f \n", b);
    return 0;   
}