/*
Input the value of 4 variables a, b, c and d and compute the resultant value of following expressions:
(a+b)*(c/d)
(a+b)*c/d
a+(b*c)/d
*/
#include<stdio.h>

int main(){
    float a, b, c, d;
    printf("Enter a b c d\n");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if(d!=0){
    printf("(a+b)*(c/d) = %.2f\n",(a+b)*(c/d));
    printf("(a+b)*c/d = %.2f\n",(a+b)*c/d);
    printf("a + (b*c)/d = %.2f\n",a + (b*c)/d);
    }
    else{
        printf("d cannot be zero as division by zero is invalid\n");
    }
    return 0;
}

