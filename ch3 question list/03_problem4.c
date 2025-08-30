//Q.Write a program to input radius of a circle and calculate its area and circumference.
#include<stdio.h>

int main(){
    float radius;
    printf("Enter the radius of the circle whose area and circumference is to be calculated.\n");
    scanf("%f",&radius);
    printf("The area of this circle is %.2f\n",(3.14*radius*radius));
    printf("And the circumference of this circle is %.2f\n",(2*3.14*radius));
    return 0;
}