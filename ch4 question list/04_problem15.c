//Q.Write a function to calculate the area of different geometric shapes (triangle, circle, rectangle).
#include<stdio.h>
#include<math.h>
float circle_s_area_calculator(float);

float circle_s_area_calculator(float radius){
    return (3.14*radius*radius);
}
float triangle_s_area_calculator_sides(float,float,float,float);

float triangle_s_area_calculator_sides(float side1,float side2,float side3,float semi_perimeter){
    return (pow((semi_perimeter*(semi_perimeter-side1)*(semi_perimeter-side2)*(semi_perimeter-side3)),1.0/2));
}
float triangle_s_area_calculator_base(float,float);

float triangle_s_area_calculator_base(float base,float height){
    return ((1.0/2)*base*height);
}
float rectangle_s_area_calculator(float,float);

float rectangle_s_area_calculator(float length,float breadth){
    return (length*breadth);
}
int main(){
   printf("Choose shape for calculating the area\nt for triangle c for circle r for rectangle\n");
    char shape;
    scanf("%c",&shape);
    if(shape=='c'){
        float radius;
        printf("Enter the radius of the circle\n");
        scanf("%f",&radius);
                       printf("The circle's area = %f\n",circle_s_area_calculator(radius));
    }
   else if(shape=='t'){
    // fflush(stdin);
        char tr_area_choice;
printf("Enter s to calculate its area through Heron's formula and b to go with base & height formula\n");
scanf(" %c",&tr_area_choice);

if(tr_area_choice=='s'){
    float side1,side2,side3;
    printf("Enter side1 side2 side3\n");
    scanf("%f %f %f",&side1,&side2,&side3);
    float semi_perimeter=(side1+side2+side3)/2;
    printf("The triangle's area = %f\n",triangle_s_area_calculator_sides(side1,side2,side3,semi_perimeter));
}
 else if(tr_area_choice=='b'){
        float base,height;
        printf("Enter base height of the triangle\n");
        scanf("%f %f",&base,&height);
        printf("The triangle's area = %f\n",triangle_s_area_calculator_base(base,height));
    }
else{
    printf("Choose between s or b\n");
}
}
else if(shape=='r'){
    float length,breadth;
    printf("Enter the length breadth of the rectangle\n");
    scanf("%f %f",&length,&breadth);
    printf("The rectangle's area = %f\n",rectangle_s_area_calculator(length,breadth));
}
else {
    printf("Choose between triangle circle rectangle\n");
}

    return 0;
}