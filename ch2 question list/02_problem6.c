// Q.Write a program to demonstrate relational operators and print results as 1 (true) or 0 (false).
#include <stdio.h>

int main()
{
    int n1 = 2, n2 = 3;
    printf("n1 = %d\tn2 = %d\n",n1,n2);
    printf("1 = TRUE\t0=FALSE\n");
    if (n1 == n2)
    {

        printf("n1 == n2 = 1\n");
    }
    else
    {
        printf("n1 == n2 = 0\n");
    }
    if (n1 >= n2)
    {
        printf("n1 >= n2 = 1\n");
    }
    else
    {
        printf("n1 >= n2 = 0\n");
    }
    if (n1 > n2)
    {
        printf("n1 > n2 = 1\n");
    }
    else
    {
        printf("n1 > n2 = 0\n");
    }
    if (n1 <= n2)
    {
        printf("n1 <= n2 = 1\n");
    }
    else
    {
        printf("n1 <= n2 = 0\n");
    }
    if (n1 < n2)
    {
        printf("n1 < n2 = 1\n");
    }
    else
    {
        printf("n1 < n2 = 0\n");
    }
    if(n1!=n2){
        printf("n1 != n2 = 1\n");
    }
    else{
        printf("n1 != n2 = 0\n");
    }
    return 0;
}