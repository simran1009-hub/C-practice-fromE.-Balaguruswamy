/*
Find the error, if any, in the following statements:
(a) if ( x > = 10 ) then
    printf ( "\n") ;
*/
#include<stdio.h>

int main(){
    int x;
    printf("Enter x\n");
    scanf("%d",&x);
    if ( x >= 10 )              //The syntax of the if statement when there is only one line of instruction in it, is "if(condition to be checked)//valid C code".Secondly, the relational operator ">=" doesn't have any space in between the "greater than" and "equal to" operator. 
    printf ( "\n") ;
    return 0;
}