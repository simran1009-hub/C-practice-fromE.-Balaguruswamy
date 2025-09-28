/*
Write a C program to input the cost price and selling price of an item and display the profit.
*/
#include<stdio.h>

int main(){
    float cost_price,selling_price, profit;
    printf("Enter the cost price of the item\n");
    scanf("%f",&cost_price);
    printf("Enter the selling price of the same item\n");
    scanf("%f",&selling_price);
    if(selling_price>=cost_price){
    
    profit=selling_price-cost_price;
    printf("When the selling price= %.2f and the cost price=%.2f, then the profit obtained= %.2f\n",selling_price,cost_price,profit);
    }
    else{
        float loss;
        loss=cost_price-selling_price;
        printf("It's a loss of %.2f\n",loss);
    }
    return 0;
}