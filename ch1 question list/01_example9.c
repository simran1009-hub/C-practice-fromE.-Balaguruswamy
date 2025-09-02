// Q.Write an alogorithm, draw a flowchart, and finally write a C program for finding the sum of only the even numbers out of 'N' numbers input by the user.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter n,we will calculate the first even numbers in first n natural numbers\n");
    scanf("%d", &n);
    for (int i = n; i>1; i--)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
       
    }
    printf("The sum of even numbers lying in first %d natural numbers is %d\n", n, sum);

    return 0;
}