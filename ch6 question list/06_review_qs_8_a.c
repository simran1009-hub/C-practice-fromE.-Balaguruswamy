/*
Assuming that x=5, y=0, and =1 initially, what will be their values after executing the following code segments?
(a) if(x && y)
        x=10;
    else
        y=10;
*/
#include<stdio.h>

int main(){
    int x=5,y=0,z=1;
    if(x && y)
        x=10;
    else
        y=10;           //After this code segment executes, the value of x, y and z will be 5, 10 and 1 respectively.

    return 0;
}