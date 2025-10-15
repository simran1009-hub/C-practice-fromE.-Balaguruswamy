/*
Write a C program to display the following pattern:
            1
          1 2 1
        1 2 3 2 1
          1 2 1
            1
*/
#include<stdio.h>

int main(){
   int n=5;
   for (int row = 0; row < 5; row++)
   {
    for (int column = 0; column < 5; column++)
    {
      if(((row==0 || row==4) && (column==2)) || ((row==1 || row==3) && (column==1 || column==3)) || (row==2 && (column==0 || column==4))){
        printf("%d ",1);
      }
      
      else if(((row==1 || row==3) && (column==2)) || (row==2 && (column==1 || column==3)) ){
        printf("%d ",2);
      }
      else if((row==2) && (column==2)){
        printf("%d ",3);
      }
      else{
     printf("  ");
      }
   }
   printf("\n");
        
  }
  return 0;
}