/*
State errors, if any, in the following input statements
(c) scanf("%f, %d,&amount,&year);
*/
#include<stdio.h>

int main(){
    float amount;
    int year;
    scanf("%f, %d",&amount,&year);           //In scanf, we have to enclose the format specifiers in double quotes.Hence, "%f, %d" is correct and not "%f, %d.
    return 0;
}