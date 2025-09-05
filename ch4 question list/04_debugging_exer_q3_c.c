/*
Find errors, if any, in the following assignment statements and rectify them.

(c) y = sqrt(100);

*/
#include<stdio.h>

int main(){
    //For (c):                                     
    double y;
    y = sqrt(100);                              /*Apart from the variable declaration part for y(sqrt() function's return value
                                                is of double datatype), we should remember to include
                                                the <math.h> library also inorder to use the "sqrt()" function.  
                                                */           
                                               
    return 0;
}