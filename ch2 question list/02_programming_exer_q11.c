/*
Area of a triangle is given by the formula
A=(S(S-a)(S-b)(S-c))^1/2
Where a, b and c are sides of the triangle and 2S= a+b+c. Write a program to compute the area of the triangle given the values of a, b and c.
*/
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,S;
        printf("Enter a b c, which are the three sides of a triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    if(((a+b)<c || (b+c)<a || (a+c)<b)){
        printf("The sides of the triangle are invalid\n");
    }
    else{
  S=((a+b+c)/2);
  printf("The area of the triangle is %.2f\n",pow((S*(S-a)*(S-b)*(S-c)),1.0/2));
    }
}