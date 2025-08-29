//Q.Write a program to evaluate the expression ((x+y)/(z+t)).
#include<stdio.h>

int main(){
    float x=5.5,y=2.5,z=4.0,t=3.0;
    printf("x=%f\ny=%f\nz=%f\nt=%f\n",x,y,z,t);
    printf("((x+y)/(z+t))=%.2f\n",((x+y)/(z+t)));
    return 0;
}