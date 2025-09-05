/*
Write a C assignment statements to evaluate the following equations:
(b) Torque = (2*m1*m2)*g/(m1 + m2)
*/
#include<stdio.h>
#define g 9.8
int main(){
    float m1, m2;
    printf("Enter m1 m2\n");
    scanf("%f %f",&m1,&m2);
    
    float Torque=((2*m1*m2)*g)/(m1 + m2);
    printf("Hence, using the above formula,\nTorque = %.2f\n",Torque);
    return 0;
}