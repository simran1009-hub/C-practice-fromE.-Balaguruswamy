/*
A set of two linear equations with two unknowns x1 and x2 is given below:
ax1 + bx2 = m
cx1 + dx2 = n
The set has a unique solution
                    x1 = md - bn/ ad - cb
                    x2 = na - mc/ ad - cb
provided the denominator ad - cb is not equal to zero.
Write a program that will read the values of constants a, b, c, d, m, and n and compute the values of x1 and x2. 
An appropriate message should be printed if ad - cb = 0.
*/
#include<stdio.h>

int main(){
    float a,b,c,d,m,n;
    double x1,x2;
    printf("The two linear equations in two variables are: ax1 + bx2 = m & cx1 + dx2 = n\nFor this enter values of a b c d m n\n");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&m,&n);
    if(((a*d) - (c*b)) != 0){
        x1= ((m*d)-(b*n))/((a*d)-(c*b));
        x2=((n*a)-(m*c))/((a*d)-(c*b));
        printf("The solutions of the above linear equations are %f %f\n",x1,x2);
    }
    else{
        printf("Since, ad-cb = 0 the values of x1 and x2 are not defined\n");
    }
    return 0;
}