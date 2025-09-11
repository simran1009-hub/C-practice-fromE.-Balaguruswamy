/*
Write a program that will read a real number from the keyboard and print the following output in one line:
Smallest integer    The given   Largest integer
not less than       number      not greater than    
the number                      the number
*/
#include<stdio.h>
#include<math.h>

int main(){
float real_No;
printf("Enter the real number\n");
scanf("%f",&real_No);
printf("%.0f\t",ceil(real_No));
printf("%.2f\t",real_No);
printf("%.0f\t",floor(real_No));
    return 0;
}