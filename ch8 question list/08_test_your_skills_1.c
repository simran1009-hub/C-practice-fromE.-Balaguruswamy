/*
Write a C program to input an array of 10 integers and find the maximum and minimum number in the array.
Also, calculate the average of all values in the array.
*/
#include<stdio.h>

int main(){
    int arr[10],sum=0,maximum,minimum;
 
    for (int i = 0; i < 10; i++)
    {

        printf("Enter arr[%d]\n",i);
        scanf("%d",&arr[i]);
       
        }
         maximum=arr[0],minimum=arr[0];
       for (int i = 0; i < 10; i++)
       {
         sum += arr[i];
        
        if(arr[i]>=maximum){
                maximum=arr[i];
        }
        if(arr[i]<=minimum){
            minimum=arr[i];
       }
       
    }
    
    printf("The maximum number in the array = %d\nThe minimum number in the array = %d\nAnd, the average of all the integers = %.2f",maximum,minimum,sum/10.0);
    
    return 0;
}