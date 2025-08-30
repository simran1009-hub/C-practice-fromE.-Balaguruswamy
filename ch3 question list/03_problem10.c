//Q.Write a program to demonstrate the use of type casting (int, float, double).
#include<stdio.h>

int main(){
    int int_g=10;
    float float_g=9.8;
    double double_g=9.80665;
    printf("g from int to float=%f\n",(float)int_g);
    printf("g from int to double=%lf\n",(double)int_g);

    printf("g from float to int=%d\n",(int)float_g);
    printf("g from float to double=%lf\n",(double)float_g);

    printf("g from double to int=%d\n",(int)double_g);
    printf("g from double to float=%f\n",(float)double_g);

    return 0;
}