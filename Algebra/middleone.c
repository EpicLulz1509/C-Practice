#include <stdio.h>
 
int main()
{

    int n;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    int a = n%10;
    n = n/10;
    int b = n%10;
    n = n/10;
    int c = n%10;
    n = n/10;
    int d = n%10;
    n = n/10;
    int mid = c*10 + b;
    int last = d*10 + a;
    int sq = mid * mid;
    int res = sq == last ? "Yes" : "No";
    printf("%d", res);    
    return 0;   
}