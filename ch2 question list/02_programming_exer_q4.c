/*
Given the values of three variables a, b and c, write a program to compute and display the value og x, where
x=a/(b-c)
*/
#include<stdio.h>

int main(){
  float a,b,c;
    printf("Enter the values of a b c\n");
        scanf("%f %f %f",&a,&b,&c);
        printf("So, a = %f, b = %f & c = %f\n",a,b,c);
        if((b-c)==0){
            printf("It is not-defined, since denominator is equal to 0 here\n");
        }
        else{
    printf("Hence, according to x = a/(b-c)\nx = %.2f\n",a/(b-c));
        }
    return 0;
}
