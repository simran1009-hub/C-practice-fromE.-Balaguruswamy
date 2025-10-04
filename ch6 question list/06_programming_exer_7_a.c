/*
Shown below is a Floyd's triangle.
1
2 3
4 5 6
7 8 9 10
11 .. .. .. 15
.
.
79 .. .. .. .. .. .. 91
(a) Write a program to print this triangle
*/
#include<stdio.h>

int main(){
  int no_of_rows,num=1;
  printf("Enter the number of rows to be printed for the Floyd's triangle pattern\n");
  scanf("%d",&no_of_rows);
  for (int i = 1; i <= no_of_rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
        printf("%d ",num);
        num++;
    }
    printf("\n");    
  }
  
  return 0;

}
