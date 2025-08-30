//Q.Write a program to demonstrate arithmetic operations on int, float, and double.
#include<stdio.h>

int main(){
    int i1=47,i2=83;
    float f1=94.33,f2=84.72;
    double d1=93.844795,d2=4432.3747537;
    printf("%d + %d = %d\n",i1,i2,(i1+i2));
    printf("%d * %d = %d\n",i1,i2,(i1*i2));
    printf("%f - %f = %f\n",f1,f2,(f1-f2));
    printf("%f + %f = %f\n",f1,f2,(f1+f2));
    printf("%lf / %lf = %lf\n",d1,d2,(d1/d2));
    printf("%lf * %lf = %lf\n",d1,d2,(d1*d2));
    return 0;
}