/*
Modify the above program to display the two right-most digits of the integral part of the number.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    float f;
    printf("Enter f, where f is a number(can be of int or float datatype). We will display the two right-most digits of its integral part\n");
    scanf("%f",&f);
    int num=f;
    int ones_place=num%10;
    num /= 10;
    int tens_place=num%10;
    printf("The two right-most digits of the integral part of the number f is %.01d%.01d\n",abs(tens_place),abs(ones_place));
    return 0;

}