/*
Write a C program to input the value of days and convert in into years, weeks and days.
*/
#include <stdio.h>

int main()
{
    int days_;
    printf("Enter days, we will convert it into years, weeks and days\n");
    scanf("%d", &days_);
    int years, weeks, days;

    years = days_ / 365;
    weeks = (days_ % 365) / 7;
    int remaining = (days_ % 365) % 7;
    days = remaining;
    printf("%d days converts to %d years, %d weeeks and %d days\n", days_, years, weeks, days);
    return 0;
}