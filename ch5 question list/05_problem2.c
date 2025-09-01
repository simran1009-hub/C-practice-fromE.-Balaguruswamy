// Q.Write a program to check whether a given number is even or odd.
#include <stdio.h>

int main()
{
    int n1;
    printf("Enter the number to be checked for even or odd\n");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("The number n1 = %d is even\n",n1);
    }
    else
    {
        printf("The number n1 = %d is odd\n",n1);
    }
    return 0;
}