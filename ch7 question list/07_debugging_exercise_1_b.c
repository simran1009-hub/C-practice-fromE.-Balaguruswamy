/*
Find errors, if any, in each of the following looping segments. Assume that all the variables have been declared 
and assigned values.
(b) name = 0;
    do { name = name + 1;
    printf("My name is John\n");}
    while (name = 1)
*/
#include<stdio.h>

int main(){
    // The first error is in the condition of while loop, the relational operator, "==" has to be used since the purpose is to do the equality check. "=" is the assignment operator and is used to assign values.
    // The second error is that a semicolon is missed after the condition in while.
    return 0;
}