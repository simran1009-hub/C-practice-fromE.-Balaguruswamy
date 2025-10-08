/*
Write a for statement to print each of the following sequences of integers:
(a) 1,2,4,8,16,32
*/
#include<stdio.h>

int main(){
  for (int i = 1; i <= 32; i *= 2)
  {
        printf("%d",i);  
        if(i!=32){
            printf(",");
        }  
  }
  
    
    return 0;
}