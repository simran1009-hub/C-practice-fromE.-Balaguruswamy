/*
Find errors, if any, in the following switch related statements. Assume that the variables x and y are of int type
and x=1 and y=2
(a) switch(y);
*/
#include<stdio.h>

int main(){
    int x, y;
    x=1, y=2;
    switch(y){
        case 2:                             //The correct syntax of switch statement is "swtich(integer expression){}", and not "switch(integer expression);".                                  
        printf("The value of y is 2\n");
        break;
    }
    return 0;
}