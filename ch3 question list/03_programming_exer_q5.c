/*
Write a program to illustrate the use of typedef declaration in a program.
*/
#include<stdio.h>

int main(){
    typedef int simran;
    simran x=4;
    printf("The datatype of x(i.e. int) is given an alias name, simran.\nx = %d\n",x);
    return 0;
}