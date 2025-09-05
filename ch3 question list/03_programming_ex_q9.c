/*
Write a C program to input an integer between 0 and 128 and print its ASCII character.
*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter n, where 0 < n < 128, we will take n as ASCII value and will print the character corresponding to that ASCII value\n");
    scanf("%d",&n);
    if(n>0 && n<128){
    printf("For the ASCII value = %d, the character corresponding to it = %c\n",n,n);
    }
    else {
        printf("Enter n such that, 0 < n < 128 remains satisfied\n");
    }
    return 0;
}