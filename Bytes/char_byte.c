#include<stdio.h>
#include<stdlib.h>

int main() {

    char a = 's';
    int n = (int)a;

    int x = (n >>  8) & 0xff;
    int y = n & 0xff;
    printf("%d %d %d %d",x,y);


   return 0;
}