/*
Write an interactive program that could read a positive integer number and decide whether the number is a prime number 
and display the output accordingly.
*/
#include<stdio.h>

int main(){
    int positive_number,n=0;
    printf("Enter a positive integer number\n");
    scanf("%d",&positive_number);
    if(positive_number>=0)
    {
        if(positive_number==0 || positive_number==1){
            printf("It is not a prime number\n");
        }
        else if(positive_number==2){
            printf("It is a prime number\n");
        }
        else {
            for (int i = 2; i < positive_number; i++)
            {
                if(positive_number%i==0){
                    printf("It is not a prime number\n");
                    n++;
                    return -1;
                }

            }
           if(n==0){
            printf("It is a prime number\n");
           } 
        }
    }
    else{
    printf("Enter a positive number only\n");
}
    return 0;
}