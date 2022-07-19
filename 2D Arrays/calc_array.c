#include<stdio.h> 

int main(){ 
    int a[3][3];
    int trans[3][3];
    int add[3][3];
    int sub[3][3];
    
    printf("Enter the values for 1st Matrix A\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter value in %d %d : \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0;i < 3;i++)
      for (int j = 0; j < 3; j++)
         trans[j][i] = a[i][j];
        
   printf("Transpose of the matrix also the second matrix here:\n");
   for (int i = 0; i< 3; i++) {
      for (int j = 0; j < 3; j++)
         printf("%d\t", trans[i][j]);
      printf("\n");
   }

    
    for(int i=0;i<3;i++)
    {
     for(int j=0;j<3;j++){
        add[i][j] = a[i][j] + trans[i][j];
        sub[i][j] = a[i][j] - trans[i][j];
     }
    }

    printf("Sum Matrix is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

    printf("Substractioc Matrix is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}