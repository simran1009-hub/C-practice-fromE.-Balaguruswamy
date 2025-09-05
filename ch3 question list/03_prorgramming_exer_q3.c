/*Write a program to count and print the number of negative and positive numbers in a given set of numbers.
Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should be terminated
when the value 0 is encountered
*/
#include <stdio.h>

int main()
{
    int n;
    int counts_positive = 0;
    int counts_negative = 0;
    for (int i = 1; i ; i++)
    {
        printf("Enter n%d\n",i);
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else if (n > 0)
        {
            counts_positive++;
        }
        else
        {
            counts_negative++;
        }
    }
    printf("The no. of positive number(s) = %d\n",counts_positive);
    printf("The no. of negative number(s) = %d\n",counts_negative);

    return 0;
}
