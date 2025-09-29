/*
Rewrite each of the following without using compound relations:
(b) if (number > 100 || number < 0)
printf(" Out of range");
else
sum = sum + number;
*/
#include<stdio.h>

int main(){
    float number,sum;
    printf("Enter number\n");
    scanf("%f",&number);
    if(number > 100)
    printf(" Out of range");
    else
    {    
    if(number < 0)
    printf(" Out of range");
    else
    sum = sum+ number;
    }
    return 0;
}