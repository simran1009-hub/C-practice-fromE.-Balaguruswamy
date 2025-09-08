/*
Write a program thta reads a floating-point number and then displays the right-most digit of the integral part of the number.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float f;
    printf("Enter f, where f is a floating-point number, we will dispaly the right-most digit of the integral part of the number\n");
    scanf("%f",&f);
    int num=f;
    printf("The right-most digit of the integral part of f is %d\n",abs(num%10));

    return 0;
}