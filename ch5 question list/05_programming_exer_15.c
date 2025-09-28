/*
Write a C program to input an investment amount and compute its fixed deposit cumulative return after 10 years
at a rate of interest of 8.75%.
*/
#include<stdio.h>
#include<math.h>

int main(){
    double investment_amount,rate_of_interest=8.75;
    int time_period_in_years=10;
    printf("Enter the amount invested, we will calculate the fixed deposit cumulative return after 10 years for a rate of interest of 8.75 percentage\n");
scanf("%lf",&investment_amount);
    double compounded_interest=investment_amount*((pow((1+(rate_of_interest/100)),time_period_in_years))-1);
printf("The fixed deposit cumulative return after %d years and at a rate of interest of %f is %f\n",time_period_in_years,rate_of_interest,(compounded_interest + investment_amount));
    return 0;
}