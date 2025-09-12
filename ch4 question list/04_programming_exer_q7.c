/*
In inventory management, the Economic Order Quantity for a single item is given by
        EOQ = ((2*demand rate*setup costs)/(holding cost per item per unit time))^1/2
and the optimal Time Between Orders
        TBO = ((2*setup costs)/(demand rate * holding cost per unit time))^1/2
Write a program to compute EOQ and TBO, given demand rate(items per unit time), setup costs(per order), and the holding cost(per item per unit time).
*/
#include<stdio.h>
#include<math.h>

int main(){
    float demand_rate,setup_costs,holding_cost;
    printf("Enter the value of demand rate (in items per unit time):\n");
    scanf("%f",&demand_rate);
    printf("Enter the value of setup costs (in per order):\n");
    scanf("%f",&setup_costs);
    printf("Enter the value of holding costs (in per item per unit time):\n");
    scanf("%f",&holding_cost);
    printf("Since, demand rate = %.2f, setup cost = %.2f & holding cost = %.2f\n\tso, EOQ (Economic Order Quantity) = %.2f &  TBO (Time Between Orders) = %.2f\n",demand_rate,setup_costs,holding_cost,sqrt((2*demand_rate*setup_costs)/(holding_cost)),sqrt((2*setup_costs)/(demand_rate*holding_cost)));
    return 0;
}