/*
Find errors, if any, in each of the following looping segments. Assume that all the variables have been declared 
and assigned values.
(e) m = 1;
    n = 0;
    for ( ; m+n < 10; ++n);
    printf("Hello\n");
    m = m+10
*/
#include<stdio.h>

int main(){
    // Error(s):
    // 1.After the () of the for loop here, there shouldn't be any semicolon. Also, if there are more than one line
    // of code in the loop body then it has to be enclosed within curly braces. Hence, we must enclose 
    // 'printf("Hello\n");' and 'm = m+10' in curly braces.

    // 2.Also, there should be a semicolon after 'm = m+10' in order to terminate this line of instruction according
    // to C.

    return 0;
}