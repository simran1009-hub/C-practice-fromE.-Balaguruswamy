// Q.Develop an alogorithm to find the sum of the first N natural numbers where N would be input by the user.
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter n, we will calculate the sum of first n natural numbers\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}