/*
Write a program to print a table of sin and cos functions for the interval from 0 to 180 degrees in increments of 15 as shown here.
*/
#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(){
int angle_in_degrees=0;
printf("x(degrees)\t\tsin(x)\t\tcos(x)\n");
for (int angle_in_degrees = 0; angle_in_degrees <= 180; angle_in_degrees += 15)
{
    float angle_in_radians=(pi/180)*angle_in_degrees;
    printf("%d\t\t%.2f\t\t%.2f\n",angle_in_degrees,sin(angle_in_radians),cos(angle_in_radians));
}

    return 0;
}