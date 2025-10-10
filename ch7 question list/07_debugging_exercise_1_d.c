/*
Find errors, if any, in each of the following looping segments. Assume that all the variables have been declared 
and assigned values.
(d) for (x = 1, x > 10; x = x + 1)
    {
                    _ _ _ _ _
                    _________
                    _________
    }
*/
#include<stdio.h>

int main(){
    // Error(s):
    // 1. There should be semicolon between 'x = 1' and 'x > 10' instead of comma because the first is the initialization of the variable 
    // x and second is the condition of the loop to have further iteration. 
    // Also, given that the variable 'x' is initialized.
    
    // 2. Since, the initial value of x = 1 and the condition that has to be checked is 'x > 10', so the condition doesn't meet. Hence, the 
    // block of loop is never executed.
    return 0;
}