/*
The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values from the user and dispaly the prices as follows:
***LIST OF ITEMS***
Item    Price
Rice    Rs.16.75
Sugar   Rs.15.00
*/
#include <stdio.h>

int main()
{
    float price_rice_one_kg, price_sugar_one_kg;
    printf("Enter the price of one kg of rice\n");
    scanf("%f", &price_rice_one_kg);
    printf("Enter the price of one kg of sugar\n");
    scanf("%f", &price_sugar_one_kg);
    printf("***LIST OF ITEMS***\n");
    printf("Item\t\tPrice\n");
    printf("Rice\t\tRs %.2f\n", price_rice_one_kg);
    printf("Sugar\t\tRs %.2f\n", price_sugar_one_kg);
    return 0;
}