/*
The straight-line method of computing the yearly depreciation of the value of an item is given by
    Depreciation=(PurchasePrice - Salvage Value)/Years of Service

Write a program to determine the salvage value of an item when the purchase price, years of service, and the annual depreciation are given
*/
#include<stdio.h>

int main(){
    float purchase_price,years_of_service,annual_depreciation;
    printf("Enter the purchase price\n");
    scanf("%f",&purchase_price);
    printf("Enter the years of service\n");
    scanf("%f",&years_of_service);
    printf("Enter the annual depreciation\n");
    scanf("%f",&annual_depreciation);
    printf("So, the salvage value is %.2f\n",(purchase_price-(annual_depreciation*years_of_service)));
    return 0;
}
