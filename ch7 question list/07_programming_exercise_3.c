/*
The numbers in the sequence
1 1 2 3 5 8 13 21 .......
are called Fibonacci numbers. Write a program using a do.....while loop to calculate and print the first m Fibonacci
numbers.
(Hint: After the first two numbers in the series, each number is the sum of the two preceding numbers.)
*/
#include <stdio.h>

int Fibonacci_series(int);

int Fibonacci_series(int m)
{
    if (m == 2 || m == 1)
    {
        return 1;
    }

    return ((Fibonacci_series(m - 1)) + (Fibonacci_series(m - 2)));
}
int main()
{
    int m, i = 1;
    printf("Enter m, we will print the first m terms of the Fibonacci series\n");
    scanf("%d", &m);
    do
    {
        printf("%d ", Fibonacci_series(i));
        i++;
    } while (i <= m);

    printf(".......");
    return 0;
}