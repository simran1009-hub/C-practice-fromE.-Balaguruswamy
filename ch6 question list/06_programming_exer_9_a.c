/*
Write a program that will read the value of x and evaluate the following function
                        1   for x > 0
                    y = 0   for x = 0
                        -1  for x < 0
using
(a) nested if statements,
*/
#include<stdio.h>

int main(){
    float x;
    int y;
    printf("Enter x\n");
    scanf("%f",&x);
  if(x>=0){
    if(x>0){
        y=1;
    }
    else{
        y=0;
    }
  }
  else{
    y=-1;
  }
    printf("y = %d\n",y);
    return 0;
}
