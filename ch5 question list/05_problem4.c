// Q.Write a program to find the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    char ch='i';
    printf("In quadratic equation, a = coefficient of x^2\nb = coefficient of x\nc = constant term\nSo, enter a b c\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("For a = %f\tb = %f\tc = %f\n", a, b, c);
    
    if(((pow(b, 2)) - (4 * a * c))>=0 && a!=0){
    printf("The roots of the quadratic are %.2f and %.2f\n", (-b + pow(((pow(b, 2)) - (4 * a * c)), 1.0 / 2)) / (2 * a), (-b - pow(((pow(b, 2)) - (4 * a * c)), 1.0 / 2)) / (2 * a));
    }
    else if(((pow(b, 2)) - (4 * a * c))<0 && a!=0){
printf("The roots of the quadratic are %.2f + %.2f %c and %.2f + %.2f %c\n",(-b)/(2*a), (pow((-((pow(b, 2)) - (4 * a * c))), 1.0 / 2) / (2 * a)), ch,(-b)/(2*a), -(( pow((-((pow(b, 2)) - (4 * a * c))), 1.0 / 2)) / (2 * a)),ch);

    }
    else{
        printf("a should not be zero for it to be a quadratic equation\n");
    }
    return 0;
}