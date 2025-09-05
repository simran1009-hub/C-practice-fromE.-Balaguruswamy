/*
Write a C program to find the roots of a quadratic equation.
*/
#include<stdio.h>
#include<math.h>

int main(){
   float a,b,c;
    printf("A quadratic equation is represented as: a(x^2) + b(x) + c, where a= coefficient of x^2, b= coefficient of x & c= constant term");
    printf("So, enter a b c, we will print the roots of the quadratic equation that it forms\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("Given, a= %f, b= %f & c= %f\n",a,b,c);
    if(a==0){
        printf("Value of a cannot be zero for it to be a quadratic equation.\n");
    }
    else if(a!=0 && ((b*b) - 4*a*c)>=0){
        printf("The roots of the quadratic are %.2f and %.2f\n",((-b)+sqrt((b*b) - 4*a*c))/(2*a),((-b)-sqrt((b*b) - 4*a*c))/(2*a));
    }
    else if(a!=0 && ((b*b) - 4*a*c)<0){
        printf("The roots of the quadratic are %.2f + %.2fi & %.2f + %.2fi\n",(-b)/(2*a),(sqrt(-((b*b) - 4*a*c)))/(2*a),(-b)/(2*a),(-((sqrt(-((b*b) - 4*a*c)))/(2*a))));
    }
    return 0;
}