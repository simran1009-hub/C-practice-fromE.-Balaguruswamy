//Q. Write a program to swap two numbers using a temporary variable and also without using a temporary variable.
#include<stdio.h>

int main(){
    int a=5,b=9;
    printf("a = %d\tb = %d\n",a,b);
    printf("\nSwapping the values of a and b using a temporary variable\n");
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a = %d\tb = %d\n",a,b);
    printf("\nNow re-swapping the value of a and b without using a temporary variable\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d\tb = %d\n",a,b);
    return 0;
}