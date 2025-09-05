/*
Write a C assignment statements to evaluate the following equations:
(a) Area = (pi)*(r^2) + 2*(pi)*r*h
*/
#include<stdio.h>
#define PI 3.14

int main(){
    float r,area,h;
    printf("Enter r\n");
    scanf("%f",&r);
    printf("Enter h\n");
    scanf("%f",&h);

    printf("Area = PI*(r^2) + 2*PI*r*h\n");
    printf("Area = %.2f, since r = %.2f & h = %.2f is given\n",(PI*r*r + 2*PI*r*h),r,h);

    return 0;
}