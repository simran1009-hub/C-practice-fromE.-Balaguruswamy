/*
Write a C program to input any two angle values of a triangle and deduce its third angle value.
*/
#include<stdio.h>

int main(){
    float angle1, angle2, angle3;
    printf("Enter value of: angle1 angle2\n");
    scanf("%f %f",&angle1,&angle2);
    if(angle1>0 && angle1<180 && angle2>0 && angle2<180 && angle1+angle2<180){
    angle3=(180 - (angle1 + angle2));
printf("the third angle value for this triangle with angles %.2f and %.2f is %.2f\n",angle1,angle2,angle3);
    }
    else{
        printf("The angle entered is invalid\n");
    }
    return 0;
}