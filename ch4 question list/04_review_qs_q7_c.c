/*
Write C assignment statements to evaluate the following equations:
Side = (a^2 + b^2 -2ab cos(x))^1/2
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a, b, x;
    printf("Enter a b x\n");
    scanf("%f %f %f",&a,&b,&x);
    float Side = sqrt((a*a) + (b*b) - (2*a*b*cos(x)));
    printf("Side = %.2f\n",Side);
   
    return 0;
}