/*
Find errors, if any, in the following assignment statements and rectify them.

(f) a = b++ -c*2
*/
#include<stdio.h>

int main(){


//For (f):

int a, b=2,c=1;
a = b++ -c*2;           /*Most importantly, any piece of instruction in C has to be terminated with a semicolon which was clearly 
                        missed here. And variable declarations are neceassary for a, b and c, all of them.Additonally, b & c variables 
                        must also be initialized.
                        */

    return 0;
}