/*
Write programs to print the following outputs using for loops.
(b)   * * * * *
        * * * *
          * * *
            * *
              *
*/
#include<stdio.h>

int main(){
  for (int i = 1; i <= 5; i++)
  {
    for (int m = 1; m < i; m++)
    {
      printf("  ");
    }
    
   for (int j = 6-i; j >=1; j--)
   {
      printf("%c ",'*');
   }
   printf("\n");
   
   
  }
  
  return 0;
}