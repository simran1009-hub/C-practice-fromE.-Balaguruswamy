/*
Write a program to compute the sum of the digits of a given integer number.
*/
#include<stdio.h>

int main(){
    int num,number,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    number=num;
   while(num != 0) { 
    sum += (num%10);
    num /= 10;
    }
    printf("The sum of the digits of %d is %d\n",number,sum);
    return 0;
}