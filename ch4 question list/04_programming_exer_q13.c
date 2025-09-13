/*
The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls. Write a program to read customer codes
and calls made and print the bill for each customer.
*/
#include<stdio.h>

int main(){
    int customer_code, no_of_calls_made;
    float bill=250;
    printf("Enter the Customer Code\n");
    scanf("%d",&customer_code);
    printf("Enter the number of calls made by the customer\n");
    scanf("%d",&no_of_calls_made);
    if(no_of_calls_made<=100){
        printf("The bill for the customer with Customer Code = %d is %.2f\n",customer_code,bill);
    }
    else {
     bill += ((no_of_calls_made-100)*1.25);
     printf("The bill for the customer with Customer Code = %d is %.2f\n",customer_code,bill);
    }

    return 0;
}