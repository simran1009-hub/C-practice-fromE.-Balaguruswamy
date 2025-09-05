/*
Write a program to do the following:
(a) Declare x and y as integer variables ans z as a short integer variable.
(b) Assign two 6 digit numbers to x and y.
(c) Assign the sum of x and y to z.
(d) Output the values of x, y and z.

Comment on the output
*/
#include<stdio.h>
int main(){
    int x, y;
    short int z;
    x=550000;
    y=-540000;
    z=(x+y);
    printf("x = %d, y = %d\nz = %hd since z=(x+y)\n",x,y,z);
      return 0;
}
//Since, z is a short integer variable, so it can store a number upto 32000 only.Therefore, we make the sum (x+y) such that it doesn't breach the range.