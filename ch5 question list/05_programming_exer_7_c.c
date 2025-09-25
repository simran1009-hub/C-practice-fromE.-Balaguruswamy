/*
Write a program that prints the value 10.45678 in exponential format with the following specifications:
(c) correct to eight decimal spaces.
*/
#include<stdio.h>

int main(){
    double n=10.45678;
    printf("%.8e\n",n);
    return 0;
}