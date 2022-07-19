#include <stdio.h>
 
int main()
{

    int a, b, c, d;
    printf("Enter 4 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int small = a<b && a<c && a<d ? a : b<a && b<c && b<d ? b : c<a && c<b && c<d ? c : d;
    printf("Smallest number: %d", small);
    return 0;   
}