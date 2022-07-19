#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a = (n >> 24) & 0xff;
    int b = (n >> 16) & 0xff;
    int c = (n >>  8) & 0xff;
    int d = n & 0xff;
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}