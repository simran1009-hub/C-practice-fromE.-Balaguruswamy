//Q.Write a program to demonstrate the difference between integer division and floating-point division.
#include<stdio.h>

int main(){
    int i1=50,i2=9;
    
    printf("Below is the division between two int datatype values,(%d and %d)\n%d / %d = %d\n",i1,i2,i1,i2,(i1/i2));
    float f1=50,f2=9;
    printf("Below is the division between two float datatype values,(%f and %f)\n%f / %f = %f\n",f1,f2,f1,f2,(f1/f2));
    
    return 0;
}