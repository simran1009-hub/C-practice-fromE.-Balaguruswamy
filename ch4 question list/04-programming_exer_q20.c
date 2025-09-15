/*
Write a C program to input the sides of a triangle and determine whether the triangle is isosceles or not.
*/
#include<stdio.h>

int main(){
    int side1, side2, side3;
printf("Enter side1 side2 side3, they are the three sides of a triangle\n");
scanf("%d %d %d",&side1,&side2,&side3);
if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
if(side1==side2 || side1==side3 || side2==side3){
    printf("The triangle is isosceles\n");
}
else{
    printf("The triangle is not isosceles\n");
}
}
else{
    printf("The sides of the triangle are invalid since the triangle doesn't exist\n");
}
    return 0;
}