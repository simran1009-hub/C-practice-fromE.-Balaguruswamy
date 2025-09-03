/*
Write a C program to input two numbers: a and b.Next, compute the value of a raised to the power of b.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("Enter a b, we will compute a^b\n");
    scanf("%d %d", &a, &b);
    printf("a^b = %lf\n", pow(a, b));
    return 0;
}