//Q.Write a function to find the sum of digits of a number.
#include<stdio.h>
 
int sum_of_digits_of_a_number(int);

int sum_of_digits_of_a_number(int num){
    int sum=0;
    while(num!=0){
    sum += num%10;
    num /= 10;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter the number whose sum of digits is to be calculated\n");
    scanf("%d",&num);
    printf("The sum of digits of %d is %d\n",num,sum_of_digits_of_a_number(num));
    return 0;
    
}