/*
Write a C program to input a currency value in Dollars and display its equivalent Euro and INR amounts. You may use 
current exchange rate for conversion purpose. 
*/
#include<stdio.h>

int main(){
    float currency_value_in_Dollars;
    printf("Enter the amount in Dollars, we will convert that into its equivalent Euro and INR amounts\n");
    scanf("%f",&currency_value_in_Dollars);
    printf("$%.2f is equivalent to Rs.%.2f\n",currency_value_in_Dollars,(currency_value_in_Dollars*(88.67)));
    printf("And in the currency of Euro, it is %.2f Euro\n",((0.85)*currency_value_in_Dollars));
    return 0;
}