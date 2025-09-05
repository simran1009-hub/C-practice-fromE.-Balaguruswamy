/*
Find errors, if any, in the following assignment statements and rectify them.

(b) m = ++a * 5;

*/
#include<stdio.h>

int main(){
    //For (b) :
    int m, a=1;
    m = ++a * 5;                                /*If we leave the variable declaration for m & a, and the variable initialization 
                                                part for a, then there is no error in this assignment statement.
                                                */
  return 0;
}