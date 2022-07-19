#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j;
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	
	printf("\nTHE VALUES OF MATRIX B ARE:\n");
	for (int i = 0;i < 3;i++)
      for (int j = 0; j < 3; j++)
         b[j][i] = a[i][j];
        
   for (int i = 0; i< 3; i++) {
      for (int j = 0; j < 3; j++)
         printf("%d\t", b[i][j]);
      printf("\n");

   }
   

    return 0;
}