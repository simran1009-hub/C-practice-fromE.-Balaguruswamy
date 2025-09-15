/*
Write a C program to shift the given data by two bits to the left
*/
#include<stdio.h>

int main(){
    int data;
    printf("Enter the value of data\n");
    scanf("%d",&data);
    printf("Hence, data = %d\n",data);
    printf("After shifting the data by two bits to the left, data = %d\n",data<<2);

    return 0;
}