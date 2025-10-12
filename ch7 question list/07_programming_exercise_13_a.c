/*
Write a program to print a square of size 5 by using the character S as shown below:
(a) S S S S S
    S S S S S
    S S S S S
    S S S S S
    S S S S S
*/
#include<stdio.h>

int main(){
    int n=5;
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            printf("S ");
        }
        printf("\n");
        
    }
    
    return 0;
}