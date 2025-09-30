/*
Find errors, if any, in the following switch related statements. Assume that the variables x and y are of int type
and x=1 and y=2
(b) case 10;
*/
#include<stdio.h>

int main(){
    int x=1,y=2;
    switch(x){
        case 10:                            //The syntax of "case" in switch statement is "case c1:" , where c1 is a constant ,with whom the equality is to be checked for the integer expression in the parenthesis of the switch statement.
        printf("The value of x is 10\n");
        break;                              
    }
    return 0;
}