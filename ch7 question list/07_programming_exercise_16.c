/*
Given a set of 10 two-digit integers containing both positive and negative values, write a program using for loop 
to compute the sum of all positive values and print the sum and the number of values added. The program should use scanf
to read the values and terminate when the sum exceeds 999. Do not use goto statement.
*/
#include<stdio.h>

int main(){
  int two_digit_numbers[10],count=0,sum=0;
  for (int i = 0; i < 10; i++)
  {
    printf("Enter two_digit_number[%d]\n",i);
    scanf("%d",&two_digit_numbers[i]);
    if(two_digit_numbers[i]>0){
        sum+=two_digit_numbers[i];
        count++;
    }
    if(sum>999){
        break;
    }
  }
  printf("There are a total of %d psotive numbers among the entire input. And their sum is %d\n",count,sum);
    
    return 0;
}