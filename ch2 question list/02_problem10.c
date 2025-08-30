//Q. Write a program to demonstrate type casting between int, float, and double.
#include<stdio.h>

int main(){
int i=4;
float f=5.39;
double d=8.78975987;
printf("float to int\t%d\n",(int)f);
printf("double to int\t%d\n",(int)d);

printf("int to float\t%f\n",(float)i);
printf("double to float\t%f\n",(float)d);

printf("int to double\t%lf\n",(double)i);
printf("float to double\t%lf\n",(double)f);

return 0;
}