/*
Find errors, if any, in the following switch related statements. Assume that the variables x and y are of int type
and x=1 and y=2
(d) switch (x) {case 2: y = x + y; break};
*/
#include<stdio.h>

int main(){
    int x=1,y=2;
    switch(x){
        case 2:
        y = x + y;
        break;          // After "break" statement we must put semicolon in order to terminate the break statement instruction, same as any other instructioion in C.
    }                   //In the syntax of switch statement, there is no semicolon after the curly brace closes.
    return 0;
}
