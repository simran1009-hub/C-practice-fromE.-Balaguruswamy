//Q. Find errors, if any, in the following program:

/*
#include(stdio.h)
void main(void)
{
print("Hello C");
}
*/
#include<stdio.h>  //stdio.h in <>
int main(void) {  //main function's return value should never be of void datatype
    printf("Hello C"); //It is printf and not print
    return 0; //The return statement is compulsory
}