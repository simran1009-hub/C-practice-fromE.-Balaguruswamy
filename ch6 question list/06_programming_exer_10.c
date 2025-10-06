/*
Write a program to compute the real roots of a quadratic equation
                            ax^2 + bx + c = 0
The roots are given by the equations
            x1 = -b + ((b^2 - 4ac)^1/2)/(2a)
            x2 = -b - ((b^2 - 4ac)^1/2)/(2a)
The program should request for the values of the constants a, b and c and point the values of x1 and x2. Use the following
rules:
(a) No solution, if both a and b are zero
(b) There is only one root, if a = 0 (x = -c/b)
(c) These are no real roots, if b^2 - 4ac is negative
(d) Otherwise, there are two real roots
Test your program with appropriate data so that all logical paths are working as per your design.
Incorporate appropriate output messages.
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
        printf("Enter the values of a b c for the quadratic equation ax^2 + bx + c = 0\n");
        scanf("%f %f %f",&a,&b,&c);
        if(a==0 && b==0){
            printf("This quadratic equation has no solution because a and b both are zero\n");
            return 1;
        }
        else if(a==0){
            float x1=(-c/b);
            printf("Since, a = 0, so this quadratic equation has only one root, x1 = %.2f\n",x1);
        }
        else if(((b*b)-(4*a*c))<0){
            printf("Since, (b^2) - 4ac < 0 (i.e. D < 0), so there are no real roots for this quadratic equation\n");
        }
        else {
            float x1,x2;
            x1=((-b ) + (sqrt((b*b) - (4*a*c))))/(2*a);
            x2=((-b ) - (sqrt((b*b) - (4*a*c))))/(2*a);
        
                printf("This quadratic equation has two real roots, x1 = %.2f and x2 = %.2f\n",x1,x2);
        }


    return 0;
}