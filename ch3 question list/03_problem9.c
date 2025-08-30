//Q.Write a program to swap two numbers without using a third variable.
#include<stdio.h>

int main(){
    int a=47,b=390;
    printf("a = %d\nb = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Now after swapping a and b without using a third variable,\na = %d\nb = %d\n",a,b);

    return 0;
}