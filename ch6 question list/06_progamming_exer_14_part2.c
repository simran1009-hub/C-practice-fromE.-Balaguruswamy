/*
Modify the program to count all the prime numbers that lie between 100 and 200.
*/
#include<stdio.h>

int main(){
    int count=0,no_of_prime=0;
    for (int num = 100; num <= 200; num++)
    {
       for (int i = 2; i < num; i++)
       {
           if(num%i==0){
                count++;
                break;
           }
           
       }
       if(count==0){
       no_of_prime++;
       }
       count=0;
    }
    printf("There are %d prime numbers between 100 and 200\n",no_of_prime);
    
    return 0;
}