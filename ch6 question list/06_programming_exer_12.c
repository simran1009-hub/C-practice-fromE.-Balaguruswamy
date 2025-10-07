/*
An electricity board charges the following rates for the use of electricity:
For the first 200 units: 80 P per unit
For the next 100 units: 90 P per unit
Beyond 300 units: Rs. 1.00 per unit
All users are charged a minimum of Rs. 100 as metercharge. if the total amount is more than Rs. 400, then an additional 
surcharge of 15% of total amount is charged.
Write a program to read the names of users and number of units consumed and print out the charges with names.
*/
#include<stdio.h>

int main(){
    char name_of_user[40];
    int number_of_units_consumed,meter_charge=100;
    float charge=0;
    printf("Enter the name of the user\n");
    scanf("%s",name_of_user);
    printf("Enter the number of units consumed\n");
    scanf("%d",&number_of_units_consumed);
    if(number_of_units_consumed<=200){
            charge+=(number_of_units_consumed*0.8);
    }
    else if(number_of_units_consumed>200){
        charge+=((200)*0.8);
        number_of_units_consumed-=200;
        if(number_of_units_consumed<=100){
            charge+=(number_of_units_consumed*0.9);
        }
            if(number_of_units_consumed>100){
                charge+=(100*0.9);
            number_of_units_consumed-=100;
            }
            if(number_of_units_consumed>=1){
                charge+=(number_of_units_consumed*1);
            }
    }
    charge+=meter_charge;
    if(charge>400){
        charge+=(0.15*charge);
    }
    printf("User = %s has %.2f charge payable\n",name_of_user,charge);
    return 0;
}