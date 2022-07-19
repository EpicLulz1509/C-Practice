#include <stdio.h>
 
int main()
{

    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    int a = n%10;
    n = n/10;
    int b = n%10;
    n = n/10;
    int c = n%10;
    n = n/10;
    int ans = a*100 + b*10 + c;
    printf("Reverse = %d", ans);
    return 0;   
}