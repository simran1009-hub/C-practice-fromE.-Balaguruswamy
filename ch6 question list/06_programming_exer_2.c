/*
Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible 
by 7.
*/
#include<stdio.h>

int main(){
    int sum=0,count=0;
    for (int i = 101; i < 200; i++)
    {
        if(i%7==0){
            count++;
            sum += i;
        }
    }
    printf("There are a total of %d integers which are greater than 100 and less than 200 & are divisible by 7.\nAlso, the sum of these same integers is %d\n",count,sum);
    
    return 0;
}