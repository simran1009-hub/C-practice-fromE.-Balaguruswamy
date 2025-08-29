//Q.Write a program to calculate the area and circumference of a circle.
#include<stdio.h>
float area_of_circle(float);
float area_of_circle(float radius){
    return (3.14*radius*radius);
}

float circumference_of_circle(float);
float circumference_of_circle(float radius){
    return (2*3.14*radius);
}
int main(){
    float radius;
    printf("Enter the radius of the circle whose area and circumference is to be calculated\n");
    scanf("%f",&radius);
    printf("The area and circumference of the circle with radius %.2f is %.2f and %.2f respectively\n",radius,area_of_circle(radius),circumference_of_circle(radius));
return 0;
}