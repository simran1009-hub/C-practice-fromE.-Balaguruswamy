/*
Write a program to determine whether a given number is 'odd' or 'even' and print the message NUMBER IS EVEN
or 
NUMBER IS ODD
(a) without using else option, and
*/
#include<stdio.h>

int main(){
    int num;
    printf("Enter num, we will check num for even or odd\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("NUMBER IS EVEN\n");
    }
    if(num%2!=0){
        printf("NUMBER IS ODD\n");
    }
    return 0;
}