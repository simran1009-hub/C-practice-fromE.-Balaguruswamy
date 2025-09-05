/*
Write a C program to print the square of a number.
*/
#include<stdio.h>

int main(){
    float n;
    printf("Enter n, we will print the square of n rounded upto two decimal digits\n");
    scanf("%f",&n);
    printf("%.2f^2 = %.2f\n",n,(n*n));
    return 0;
}