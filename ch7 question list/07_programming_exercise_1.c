/*
Given a number, write a program using while loop to reverse the digits of the number. For example, the number
    12345
    should be written as
    54321
    (Hint: Use modulus operator to extract the last digit and the integer division by 10 to get the n-1 digit
    number from the n digit number.)
*/
#include<stdio.h>

int main(){
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    while(number!=0){
       printf("%d",number%10);
       number/=10;
       
    }
    return 0;
}