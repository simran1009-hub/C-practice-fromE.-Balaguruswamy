//Q.Write a function to calculate the power of a number using recursion.
#include<stdio.h>

int no_to_the_power_calculator(int,int);

int no_to_the_power_calculator(int num,int power){
    if(power==0){
return 1;
    }
    if(power==1){
        return num;
    }
    return (no_to_the_power_calculator(num,power-1)*num);
}
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int power;
    printf("Enter the power to be calculated for the number\n");
    scanf("%d",&power);
    printf("The value of %d raised to the power %d is %d\n",num,power,no_to_the_power_calculator(num,power));
    return 0;
}