/*
Write a program to read a four digit integer and print the sum of its digits.
HINT : Use / and % operators.
*/
#include<stdio.h>

int main(){
    int four_digit_integer,sum=0;
    printf("Enter a 4-digit integer, we will print the sum of its digits\n");
    scanf("%d",&four_digit_integer);
    int use=four_digit_integer;
    while(use>0){
  sum += use % 10 ;
  use /= 10;
    }
    printf("The sum of the digits of %d is %d\n",four_digit_integer,sum);
    return 0;
}