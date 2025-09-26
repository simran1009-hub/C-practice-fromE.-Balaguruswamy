/*
Write a program to print the value 345.6789 in fixed-point format with the following specifications:
(b) correct to five decimal places; and
*/
#include<stdio.h>
int main(){
    float n=345.6789;
    printf("%.5f\n",n);
    return 0;
}
