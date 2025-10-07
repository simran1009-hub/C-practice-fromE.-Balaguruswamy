/*
Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie 
between 0 and 100. The program should also count and display the number of such values.
*/
#include<stdio.h>

int main(){
    printf("This program computes and displays the sum of all integers and the number of such integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100.\n");
    int count=0,sum=0;
    for (int i = 0; i <= 100; i++)
    {
        if(i%6==0 && i%4!=0){
            count++;
            sum+=i;
        }
    }
    printf("There are a total of %d such integers and their sum is %d\n",count,sum);
    return 0;
}