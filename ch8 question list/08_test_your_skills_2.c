/*
Write a C program to compute the sum of two 3 X 3 matrices.
*/
#include<stdio.h>

int main(){
    int matrix1[3][3],matrix2[3][3],sum[3][3];
    printf("For matrix1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter element[%d][%d]\n",i,j);
            scanf("%d",&matrix1[i][j]);
            
        }
        
    }
    printf("For matrix2\n");
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        printf("enter element[%d][%d]\n",i,j);
        scanf("%d",&matrix2[i][j]);
      }
      
        
    }
    printf("\nThe sum of the two 3 X 3 matrices results in the below given matrix:\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = (matrix1[i][j] + matrix2[i][j]);
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}