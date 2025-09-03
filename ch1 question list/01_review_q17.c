/*
Write an algorithm and draw a flowchart to find out the sum of the following series:
1^2 + 3^2 + 5^2 + .... + N terms
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double sum = 0;
    printf("Enter n, we will find the sum of this series(1^2 + 3^2 + 5^2 + .... + N terms) till n terms\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum += pow(((2 * i) + 1), 2);
    }
    printf("The sum of %d terms of series is %lf\n", n, sum);

    return 0;
}