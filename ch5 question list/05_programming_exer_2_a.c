/*
Write a program to read the values of x and y and print the results of the following expression in one line:
(a) (x+y)/(x-y)
*/
#include<stdio.h>

int main(){
  float x,y;
    printf("Enter values of x y\n");
    scanf("%f %f",&x,&y);
    if((x-y)!=0){
    printf("(x+y)/(x-y) = %.2f\n",((x+y)/(x-y)));
    }
    else{
        printf("Division by zero is not possible, hence (x-y) should not be equal to zero\n");
    }
    return 0;
}