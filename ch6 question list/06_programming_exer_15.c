/*
Write a program to read a double-type value x that represents angle in radians and a character-type variable T
that represents the type of trigonometric function and display the value of
(a) sin(x), if s or S is assigned to T,
(b) cos(x), if c or C is assigned to T, and
(c) tan(x), if t or T is assigned to T
using (i) if.....else statement, and
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    char T;
    printf("Enter x, where x is a double-datatype value representing angle in radians\n");
    scanf("%lf", &x);
    printf("Enter T, where T represents the type of trigonometric function and is a character-datatpe value\ns or S for sin(x),\nc or C for cos(x) and\nt or T for tan(x)\n");
    scanf(" %c", &T);
    if (T == 's' || T == 'S')
    {
        printf("sin(x) = %.2f\n", sin(x));
    }
    else if (T == 'c' || T == 'C')
    {
        printf("cos(x) = %.2f\n", cos(x));
    }
    else if (T == 't' || T == 'T')
    {
        if(round(cos(x))==0){
            printf("tan(x) = Not defined\n");
        }
      else{
          printf("tan(x) = %.2f\n",tan(x));
      }
    }
    else
    {
        printf("The variable 'T' can only take values among 's'/'S', 'c'/'C' or't'/'T'\n");
    }
    return 0;
}