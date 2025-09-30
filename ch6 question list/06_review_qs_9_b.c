/*
Assuming that x = 2, y = 1 and z = 0 initially, what will be their values after executing the following code segments?
switch(y)
        {
        case 0:
            x = 0;
            y = 0;
        case 2:
            x = 2;
            z = 2;
        default:
            x = 1;
            y = 2;
        }     
*/
#include<stdio.h>

int main(){
    int x=2, y=1, z=0;
    switch(y)
        {
        case 0:
            x = 0;
            y = 0;
        case 2:
            x = 2;
            z = 2;
        default:
            x = 1;
            y = 2;
        }                           //After this code segment executes, the value of x, y and z will be 1, 2 and 0 respectively.
    return 0;
}
