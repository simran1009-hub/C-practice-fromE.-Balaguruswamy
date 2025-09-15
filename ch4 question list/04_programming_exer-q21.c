/*
Write a C program that reads two numbers and performs their division. If the division is not possible, then an error message, 'Division not possible' is
displayed.
*/
#include<stdio.h>

int main(){
    float x, y;
    printf("Enter x y, we will divide x by y\n");
    scanf("%f %f",&x,&y);
    if(y!=0){
        printf("x divided by y is %.2f\n",x/y);
    }
    else{
        printf("Division not possible\n");
    }
    return 0;
}