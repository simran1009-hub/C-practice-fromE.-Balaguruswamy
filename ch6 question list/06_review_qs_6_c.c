/*
Find errors, if any, in the following switch related statements. Assume that the variables x and y are of int type
and x=1 and y=2
(c) switch (x + y)
*/
#include<stdio.h>

int main(){
    int x=1,y=2;
    switch(x+y){
        case 3:                                 //The syntax of switch statements is "switch(integer expression){}".
        printf("The value of (x+y) is 3\n");
        break;
         
        case 5:
        printf("The value of (x+y) is 5\n");
        break;
    }
    return 0;
}