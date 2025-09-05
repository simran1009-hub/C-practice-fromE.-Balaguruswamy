/*
Find errors, if any, in the following assignment statements and rectify them.

(e) s = /5;

*/
#include<stdio.h>

int main(){

//For (e):
float s=11;
s /= 5;                 /*Apart from declaring s(preferrably as float variable since "s/= 5;" can be a decimal number) and initializing it
                        (since "s /= 5;" equals "s = s/5;"), the error remains in the representation of the compound assignment operator
                        "/=". Hence, it is "/=" and not "=/".
)
*/


return 0;
}