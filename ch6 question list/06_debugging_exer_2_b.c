/*
Find the error, if any, in the following statements:
(b) if x > = 10
    printf ( "OK" ) ;
*/
#include<stdio.h>

int main(){
    int x;
    printf("Enter x\n");
    scanf("%d",&x);
        if (x >= 10)                     //There is no space between "greater than" and "equal to" character in the relational operator ">=". Also, the conditional statement that we check inside if statement must always be enclosed within parenthesis.
    printf ( "OK" ) ;
    return 0;
}