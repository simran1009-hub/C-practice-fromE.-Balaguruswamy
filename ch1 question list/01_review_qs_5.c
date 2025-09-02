// Q.Write an algorithm and draw a flowchart to find the sum of the digits of a 3-digit number.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a 3-digit number whose sum of the digits has to be computed\n");
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("The sum of the digits of n is %d\n",sum);

    return 0;
}