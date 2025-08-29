//Q. Write a program to calculate the simple interest and compound interest.
#include<stdio.h>
#include<math.h>

float simple_interest_calculator(float,float,float);

float simple_interest_calculator(float P,float R,float T){
    return ((P*R*T)/100);
}
float compound_interest_calculator(float,float,float);

float compound_interest_calculator(float P,float R,float T){
    return P*((pow(1+(R/100),T))-1);
}
int main(){
    float P,R,T;
    printf("P=principal amount\nR=rate of interest in percentage\nT=time period\n");
    printf("Enter P R T\n");
    scanf("%f %f %f",&P,&R,&T);
printf("Then the simple interest is %.2f\n",simple_interest_calculator(P,R,T));
printf("And the compound interest is %.2f\n",compound_interest_calculator(P,R,T));
return 0;
}