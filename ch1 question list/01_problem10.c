//Q.Write a program to calculate the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
void roots_of_quadratic(float,float,float);

void roots_of_quadratic(float a,float b,float c){
    float root_1=((-b + pow(((pow(b,2))-4*a*c),1.0/2))/2*a);
    float root_2=((-b - pow(((pow(b,2))-4*a*c),1.0/2))/2*a);
    printf("The roots of the quadratic are %.2f and %.2f\n",root_1,root_2);

}
int main(){
    printf("This code works only when the roots are real\n");
float a,b,c;
printf("a=coefficient of x^2\nb=coefficient of x\nc=constant term\n");
printf("Enter a b c\n");
scanf("%f %f %f",&a,&b,&c);
printf("So a=%f\nb=%f\nc=%f\n",a,b,c);
roots_of_quadratic(a,b,c);

}