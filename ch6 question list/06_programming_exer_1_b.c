/*
Write a program to determine whether a given number is 'odd' or 'even' and print the message NUMBER IS EVEN
or 
NUMBER IS ODD
(b) with else option.
*/
#include<stdio.h>

int main(){
    int num;
    printf("Enter num\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("NUMBER IS EVEN\n");
    }
    else{
        printf("NUMBER IS ODD\n");
    }
    return 0;
}