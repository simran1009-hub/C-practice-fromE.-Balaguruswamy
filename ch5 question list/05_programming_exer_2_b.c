/*
Write a program to read the values of x and y and print the results of the following expression in one line:
(b) (x+y)/2
*/
#include<stdio.h>

int main(){
    float x, y;
    printf("Enter x y\n");
    scanf("%f %f",&x,&y);
    printf("(x + y)/2 = %.2f\n",(x + y)/2);
    return 0;
}