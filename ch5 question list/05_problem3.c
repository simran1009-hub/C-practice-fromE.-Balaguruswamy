// Q.Write a program to check whether a given number is positive, negative, or zero.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to be checked for positive, negative or zero\n");
    scanf("%d", &n);
    printf("n = %d\n", n);
    if (n > 0)
    {
        printf("n is a positive number\n");
    }
    else if (n == 0)
    {
        printf("n is zero\n");
    }
    else
    {
        printf("n is a negative number\n");
    }
    return 0;
}