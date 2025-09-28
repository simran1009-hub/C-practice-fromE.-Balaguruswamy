/*
Write a C program to display the following pattern.
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        1
*/
#include<stdio.h>


int main(){
    int n;
    printf("Enter n, we will print n no. of lines of that pattern\n");
    scanf("%d",&n);
    for (int j = 0; j < n; j++)
    {
        for (int l = 0; l < j; l++)
        {
            printf("  ");
        }
       
        
        for (int i = n-j; i; i--)
        {
          printf("%d",i);
          if(i>1){
            printf(" ");
          }      
        }
        printf("\n");
        
    }
    
    
    return 0;

}