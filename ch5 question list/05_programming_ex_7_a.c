/*
Write a program that prints the value 10.45678 in exponential format with the following specifications:
(a) correct to two decimal places
*/
#include<stdio.h>

int main(){
    float n=10.45678;
    printf("%0.2e\n",n);
    return 0;
}

