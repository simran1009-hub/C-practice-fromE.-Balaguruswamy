/*
Write a C program to compute the value of the expression x=a-b/3+c*2-1
*/
#include<stdio.h>

int main(){
    int a, b, c;
    float x;
    printf("Enter a b c, we will compute the value of x, where x =(( a-(b/3))+(c*2))-1\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("x = %.2f\n",a-b/3.0+c*2-1);
    return 0;
}