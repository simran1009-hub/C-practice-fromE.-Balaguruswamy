/*
Write a program to read the values of x and y and print the results of the following expression in one line:
(c) (x+y)(x-y)
*/
#include<stdio.h>

int main(){
    float x, y;
    printf("Enter x y\n");
    scanf("%f %f",&x,&y);
    if((x-y)!=0){
    printf("(x + y)(x - y) = %.2f\n",(x+y)*(x-y));
    }
    else{
        printf("Since, division by zero is not valid, that is why (x-y) cannot be zero\n");
    }
    return 0;
}