#include <stdio.h>
 
int main()
{

    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d \n", &a);
    scanf("%d \n", &b);
    printf("Sum = %d \n", (a+b));
    printf("Difference = %d \n", (a-b));
    printf("Product = %d \n", (a*b));
    printf("Quotient = %d \n", (a/b));
    printf("Remainder = %d \n", (a%b));
    ++a;
    ++b;
    printf("++a = %d \n", a);
    printf("++b = %d \n", b);
    a++;
    b++;
    printf("a++ = %d \n", a);
    printf("b++ = %d \n", b);
    --a;
    --b;
    printf("--a = %d \n", a);
    printf("--b = %d \n", b);
    a--;
    b--;
    printf("a-- = %d \n", a);
    printf("b-- = %d 1\n", b);
    return 0;   
}   