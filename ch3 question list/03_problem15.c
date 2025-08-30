//Q.Write a program to find the area of a triangle using Heron’s formula.
#include<stdio.h>
#include<math.h>

int main(){
    float side1,side2,side3;
    printf("Enter the side1 side2 side3 of the triangle whose area is to be calculated\n");
    scanf("%f %f %f",&side1,&side2,&side3);
    float semi_perimeter=((side1+side2+side3)/2);
    printf("The area of the triangle is %f\n",pow((semi_perimeter*(semi_perimeter-side1)*(semi_perimeter-side2)*(semi_perimeter-side3)),1.0/2));
    return 0;
}