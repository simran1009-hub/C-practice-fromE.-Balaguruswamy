//Q.Write a program to input principal, rate, and time, and calculate simple interest.
#include<stdio.h>

int main(){
    float principal,rate,time;
    printf("Enter principal\n");
    scanf("%f",&principal);
    printf("Enter rate\n");
    scanf("%f",&rate);
    printf("Enter time\n");
    scanf("%f",&time);

    printf("Simple Interest = %f\n",((principal*rate*time)/100));
    return 0;
}