/*
Write a program that will read the value of x and evaluate the following function
                        1   for x > 0
                    y = 0   for x = 0
                        -1  for x < 0
using
(a) else if statements, and
*/
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x\n");
    scanf("%d",&x);
    if(x>0){
        y=1;
    }
    else if(x==0){
        y=0;
    }
    else {
        y=-1;
    }
        printf("y = %d\n",y);
    return 0;
}