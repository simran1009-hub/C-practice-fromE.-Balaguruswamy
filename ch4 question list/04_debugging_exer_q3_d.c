/*
Find errors, if any, in the following assignment statements and rectify them.

(d) p * = x/y;

*/
#include<stdio.h>

int main(){
    //For (d):                                                           
   int x=5;
   float p=1.0,y=2.00;
    p *= x/y ;                                   /*Firstly, this compound assignment operator is represented as "*=" and has no 
                                                spaces between "*" and "=".And, p should be declared and inittialized since "p *= x/y" 
                                                equals "p = p* x/y".Also, logically x/y will return a floating point number in many cases, so in 
                                                order to contain the exact value at least one of x and y must be of float datatype,( and should have been declared also)
                                                 according to type conversion in C.
                                                */               

    

    return 0;
}