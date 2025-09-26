/*
Write a program to print the value 345.6789 in fixed-point format with the following specifications:
(a) correct to two decimal places;
*/
#include<stdio.h>

int main(){
    float n=345.6789;
    printf("%.2f\n",n);
    return 0;
}