/*
Write a for statement to print each of the following sequences of integers:
(d) -10,-12,-14,-18,-26,-42
*/
#include<stdio.h>

int main(){
    int m=-2;
    for (int i = -10; i >=-42; i+=m)
    {
          printf("%d",i);
         
         if(i==-14){
            m=-4;
          }
          else if(i==-18){
            m=-8;
          }
          else if(i==-26){
            m=-16;
          }
          if(i!=-42){
            printf(",");
          }
         
    }
    return 0;
    }
