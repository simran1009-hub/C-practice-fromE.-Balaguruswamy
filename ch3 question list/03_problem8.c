//Q.Write a program to swap two numbers using a third variable.
#include<stdio.h>

int main(){
    int a =8,b=44;
    printf("a = %d\nb = %d\n",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("Now after swapping using a third variable,\na = %d\nb = %d\n",a,b);

    return 0;
}