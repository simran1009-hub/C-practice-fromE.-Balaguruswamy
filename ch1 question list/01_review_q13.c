/*
Write an algorithm and draw a flowchart to find the sum of the following series :
1*2 + 2*3 + 3*4 + ..... + N terms
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n, we will calculate the sum of the following series : 1*2 + 2*3 + 3*4 + ..... + n*(n+1), till n terms\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1);
    }
    printf("The sum of this series till %d terms is %d\n", n, sum);
    return 0;
}