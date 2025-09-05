/*
Write a C program to input an integer and print its table.
*/ 
#include<stdio.h>

int main(){
    int n;
    printf("Enter n, we will print the multiplication table of n\n");
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n",n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,(n*i));
    }
    
    return 0;
}