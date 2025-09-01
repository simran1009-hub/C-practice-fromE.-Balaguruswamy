// Q.Write a program to check whether a given year is a leap year or not.
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year which has to be checked for leap year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("It is not a leap year\n");
    }
    return 0;
}