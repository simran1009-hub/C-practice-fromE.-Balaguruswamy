/*
Find the error, if any, in the following statements:
(d) if (x = < 10)
    printf ("Welcome") ;
*/
#include<stdio.h>

int main(){
    int x;
    printf("Enter x\n");
    scanf("%d",&x);
    if (x <= 10)                    //The syntax of the relational operator to check for "less than or equal to" is "<=", with no space in between and should always be in the same order only. 
    printf ("Welcome") ;
    return 0;
}