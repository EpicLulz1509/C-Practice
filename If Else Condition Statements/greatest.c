#include <stdio.h>
 
int main()
{

    int a, b, c, d, e, f;
    printf("Enter 6 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    int great = a>b && a>c && a>d && a>e && a>f ? a : b>a && b>c && b>d && b>e && b>f ? b : c>a && c>b && c>d && c>e && c>f ? c : d>a && d>b && d>c && d>e && d>f ? d : e>a && e>b && e>c && e>d && e>f ? e : f;
    printf("Greatest number: %d", great);
    return 0;   
}