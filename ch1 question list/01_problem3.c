//Q. Write a program to find the area and perimeter of a rectangle.
#include<stdio.h>
float area_of_rectangle(float,float);

float area_of_rectangle(float length,float breadth){
    return (length*breadth);
}

float perimeter_of_rectangle(float,float);

float perimeter_of_rectangle(float length,float breadth){
    return ((2*length) + (2*breadth));
}
int main(){
float length,breadth;
scanf("%f %f",&length,&breadth);
printf("The area and perimeter of the rectangle with length=%.2f and breadth=%.2f are %.2f and %.2f respectively\n",length,breadth,area_of_rectangle(length,breadth),perimeter_of_rectangle(length,breadth));
}