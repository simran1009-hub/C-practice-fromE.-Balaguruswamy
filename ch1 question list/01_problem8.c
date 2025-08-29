//Q.Write a program to calculate the area of a triangle when all three sides are given (Heron’s formula).
#include<stdio.h>
#include<math.h>
float area_of_triangle_throught_Heron_s_formula(float,float,float,float);

float area_of_triangle_throught_Heron_s_formula(float side1,float side2,float side3,float semi_perimeter){
    return (pow((semi_perimeter*(semi_perimeter-side1)*(semi_perimeter-side2)*(semi_perimeter-side3)),1/2.0));
}
int main(){
    float side1=6.0,side2=4.00,side3=4.00;
    float semi_perimeter=((side1+side2+side3)/2.0);
printf("The area of a triangle with sides %f, %f and %f through Heron's formula is %.2f\n",side1,side2,side3,area_of_triangle_throught_Heron_s_formula(side1,side2,side3,semi_perimeter));
return 0;
}