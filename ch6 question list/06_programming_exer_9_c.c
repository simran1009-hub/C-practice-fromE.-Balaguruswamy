/*
Write a program that will read the value of x and evaluate the following function
                        1   for x > 0
                    y = 0   for x = 0
                        -1  for x < 0
using
(c) conditional operator ? :
*/
#include <stdio.h>

int main()
{
    float x;
   int y;
    printf("Enter x\n");
    scanf("%f", &x);
    y = (x > 0) ? 1 : ((x == 0) ? 0 : -1);

    printf("y = %d\n", y);

    return 0;
}