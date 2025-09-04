/*
Write a program that requests two float type numbers from the user and then divides the first number
by the second and display the result along with the numbers
*/
#include<stdio.h>

int main(){
    float num1,num2;
    printf("Enter num1 num2, both of which are floating point numbers\n");
    scanf("%f %f",&num1,&num2);
  printf("num1 = %.2f & num2 = %.2f\n",num1,num2);
  if(num2==0){
    printf("%.2f / %.2f is invalid as num2 = 0\n",num1,num2);
  }
    else{
        printf("%.2f / %.2f = %.2f\n",num1,num2,num1/num2);
    }
    return 0;
}