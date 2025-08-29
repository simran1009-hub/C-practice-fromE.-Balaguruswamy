// //Q.Write a program to swap two numbers without using a temporary variable.
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Now we swap the value of a and b without using a temporary variable\n");
    a= a + b;
    b= a - b;
    a= a - b;
    printf("So, now the value of a is %d and that of b is %d\n",a,b);
    return 0;
}
