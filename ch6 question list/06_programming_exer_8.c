/*
A cloth showroom has announced the following seasonal discounts on purchase of items:
Purchase amount                                     Discount
                                Mill cloth                              Handloom items
0 - 100                             _                                          5%
101 - 200                           5%                                        7.5%
201 - 300                          7.5%                                      10.0%
Above 300                         10.0%                                      15.0%
Write a program using switch and if statements to compute the net amount to be paid by a customer.
*/
#include<stdio.h>

int main(){
    float Purchase_amount;
    char cloth_type;
    printf("Enter customer's purchase amount\n");
    scanf("%f",&Purchase_amount);
    printf("Enter M, for Mill cloth & H, for Handloom items\n");
    scanf(" %c",&cloth_type);
    int category=(int)((Purchase_amount-1)/100);
    switch(category){
        case 0:
        if(cloth_type=='M' || cloth_type=='m'){
            printf("Ineligible to avail discounts. Amount payable is %.2f\n",Purchase_amount);
        }
        else if(cloth_type=='H' || cloth_type=='h'){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",5,(Purchase_amount-(0.05*Purchase_amount)));
        }
        break;

        case 1:
         if(cloth_type=='M' || cloth_type=='m' ){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",5,(Purchase_amount-(0.05*Purchase_amount)));
        }
        else if(cloth_type=='H' || cloth_type=='h'){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",7.5,(Purchase_amount-(0.075*Purchase_amount)));
        }
        break;
        
        case 2:
         if(cloth_type=='M' || cloth_type=='m'){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",7.5,(Purchase_amount-(0.075*Purchase_amount)));
        }
        else if(cloth_type=='H' || cloth_type=='h'){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",10,(Purchase_amount-(0.1*Purchase_amount)));
        }
        break;
        default:
         if(cloth_type=='M' || cloth_type=='m'){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",10,(Purchase_amount-(0.1*Purchase_amount)));
        }
        else if(cloth_type=='H' || cloth_type=='h'){
            printf("Eligible for %.1f percent discount. Amount payable is %.2f\n",15,(Purchase_amount-(0.15*Purchase_amount)));
        }

    }
    return 0;
}