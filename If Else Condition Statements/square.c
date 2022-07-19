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
    int sqw = mid * mid;
    char res = sqw>last && sqw<last ? 'Y' : 'N';
    printf("%c", res);
    return 0;   
}