/*
Write a program that prints the value 10.45678 in exponential format with the following specifications:
(b) correct to four decimal places; and
*/
#include<stdio.h>

int main(){
    float n=10.45678;
    printf("%0.4e\n",n);
    return 0;
}

