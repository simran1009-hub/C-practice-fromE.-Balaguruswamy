/*
A computer manufacturing company has the following monthly compensation policy to their sales_persons: 
Minimum base salary                         : 1500.00
Bonus for every computer sold               : 200.00
Commission on the total monthly sales       : 2 per cent
Since the prices of computers are changing, the sales price of each computer is fixed at the beginning of every month. A program
to compute a sales-person gross salary has to be programmed.
*/
#include<stdio.h>

int main(){
    float base_salary=1500.00, bonus_for_every_computer_sold=200.00, commission_on_the_total_monthly_sales=0.02, price_of_computer;
    int no_of_computers_sold;
    printf("Base salary of sales-person = %.2f\nBonus for every computer sold = %.2f\nCommission on the total monthly sales = %.2f\n",base_salary,bonus_for_every_computer_sold,commission_on_the_total_monthly_sales);
    printf("\nEnter number of computer(s) sold\n");
    scanf("%d",&no_of_computers_sold);
    printf("Enter the price of one computer\n");
    scanf("%f",&price_of_computer);
    printf("No of computers sold = %d\tPrice of one computer = %.2f\n",no_of_computers_sold,price_of_computer);
    
        
    printf("Bonus = %.2f\n",bonus_for_every_computer_sold*no_of_computers_sold);
    printf("Commission = %.2f\n",commission_on_the_total_monthly_sales*no_of_computers_sold*price_of_computer);
    printf("Hence, the Gross salary = %.2f\n",base_salary+(bonus_for_every_computer_sold*no_of_computers_sold)+(commission_on_the_total_monthly_sales*no_of_computers_sold*price_of_computer));
    return 0;
}