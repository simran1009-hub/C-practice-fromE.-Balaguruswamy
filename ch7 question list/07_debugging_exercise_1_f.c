/*
Find errors, if any, in each of the following looping segments. Assume that all the variables have been declared 
and assigned values.
(f) for (p = 10; p > 0;)
    p = p - 1;
    printf("%f", p);
*/
#include<stdio.h>

int main(){
    // Error(s):
    // 1. The block of code of the for loop must be enclosed within {} when there are more than one line of code in the
    // loop. Hence, if "p = p - 1;" and "printf("%f", p);" both are to be included within the loop body, then {} has 
    // to be used.
    
    return 0;
}