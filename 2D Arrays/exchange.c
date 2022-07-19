#include<stdio.h>

int main()
{
    int m[4][4];
    int count=1;
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=count;
            count++;
        }
    }

    printf("The original matrix is:\n\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",m[i][j]);
        }

        printf("\n");
    }

    int n[4][4];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            n[i][j]=m[i+2][j+2];
        }
    }

    for(i=2;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            n[i][j]=m[j][i];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=2;j<4;j++)
        {
            n[i][j]=m[j][i];
        }
    }

    for(i=2;i<4;i++)
    {
        for(j=2;j<4;j++)
        {
            n[i][j]=m[i-2][j-2];
        }
    }

    printf("\n\nThe desired matrix is:\n\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",n[i][j]);
        }

        printf("\n");
    }

    return 0;
}