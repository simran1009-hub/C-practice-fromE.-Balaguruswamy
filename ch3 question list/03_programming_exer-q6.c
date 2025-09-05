/*
Write a program to illustrate the use of symbolic constants in a real-life application
*/
#include<stdio.h>
#define g 9.8

int main(){
const float m=10;
float weight=m*g;
printf("If mass of the body = %.2f, then its weight = %.2f\n",m,(m*g));
    return 0;
}