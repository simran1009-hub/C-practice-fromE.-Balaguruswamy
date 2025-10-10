/*
Find errors, if any, in each of the following looping segments. Assume that all the variables have been declared 
and assigned values.
(a) while (count != 10);
    {
                count = 1;
                sum = sum + x;
                count = count + 1;
    }
*/
#include<stdio.h>

int main(){
          // The first error in this code is the syntax of while loop. There shouldn't be any semicolon after the condition of while loop.
          // Also, the other error is that this loop will run infinite number of times due to the resetting of count with value =1.

    return 0;
}