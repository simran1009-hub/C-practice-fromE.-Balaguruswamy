//Q.Write a program to calculate the sum, difference, product, quotient, and remainder of two numbers.
#include<stdio.h>

int main(){
    int n1=20,n2=4;
    printf("n1=%d and n2=%d\n",n1,n2);
    printf("n1 + n2= %d\n",(n1+n2));
    printf("n1 - n2= %d\n",(n1-n2));
    printf("n1 * n2= %d\n",(n1*n2));
    printf("n1 / n2= %d\n",(n1/n2));
    printf("The remainder when n1 is divided by n2 is %d\n",(n1 % n2));
    return 0;
}