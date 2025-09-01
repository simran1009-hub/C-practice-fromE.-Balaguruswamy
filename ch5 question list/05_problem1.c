// Q.Write a program to find the greatest of three numbers using if-else statements.
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter n1 n2 n3\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Hence, n1 = %d\tn2 = %d\tn3 = %d\n",n1,n2,n3);
    if (n1 >= n2 && n1 >= n3)
    {
        printf("n1 is the greatest\n");
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("n2 is the greatest\n");
    }
    else
    {
        printf("n3 is the greatest\n");
    }
    return 0;
}