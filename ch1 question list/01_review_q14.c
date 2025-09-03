// Q. Write an algorithm and draw a flowchart to find out whether a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, digit;
    double sum=0;
    printf("Enter n, we will check n for Armstrong number\n");
    scanf("%d", &n);
    int n_temp = n, count = 0;
    while (n_temp != 0)
    {
        n_temp /= 10;
        count++;
    }
    n_temp = n;
    while (n_temp != 0)
    {
        digit = n_temp % 10;
        n_temp /= 10;
        sum += pow(digit, count);
    }
    if (sum==n)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}