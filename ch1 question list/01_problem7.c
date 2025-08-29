//Q.Write a program to calculate the area of a triangle when its base and height are given.
#include<stdio.h>
float area_of_triangle(float,float);

float area_of_triangle(float base,float height){
    return ((1.0/2)*base*height);
}
int main(){
   float base=2.00,height=4.0;
printf("The area of the triangle with base %f and height %f is %.2f\n",base,height,area_of_triangle(base,height));
return 0;
}