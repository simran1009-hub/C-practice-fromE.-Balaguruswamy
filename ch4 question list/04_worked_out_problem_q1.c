/*
Write a program to convert a given number of days into months and days.
*/
#include<stdio.h>

int main(){
    int given_no_of_days;
    int months=0,days;
    printf("Enter days, we will convert it into months and days\n");
    scanf("%d",&given_no_of_days);
   months=given_no_of_days/30;
   int remaining=given_no_of_days%30;
   days=remaining;
   printf("%d days converts to %d months and %d days\n",given_no_of_days,months,days);

    return 0;
}