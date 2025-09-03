/*
Write a program to output the following multiplication table:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
.
.
.
5 X 10 = 50
*/
#include<stdio.h>

int main(){
    int n=5;
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",n,(i+1),(n*(i+1)));
    }
    
    return 0;
}