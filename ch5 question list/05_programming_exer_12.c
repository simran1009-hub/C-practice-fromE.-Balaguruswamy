/*
Write a C program to display the Pascal's triangle.
*/
#include<stdio.h>

int main(){
    int no_of_rows;
    printf("Enter the no. of rows that is to be printed for the Pascal's triangle\n");
    scanf("%d",&no_of_rows); 
   int triangle[no_of_rows][no_of_rows];

    for (int i = 0; i < no_of_rows; i++)
    {
        for (int m = no_of_rows-i-1; m; m--)
        {
            
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j==i){
              triangle[i][j]=1;
             
            }
            else{
              triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
            }
            
            printf("%d ",triangle[i][j]);
        }
        printf("\n");
        
    }

    
    return 0;
}