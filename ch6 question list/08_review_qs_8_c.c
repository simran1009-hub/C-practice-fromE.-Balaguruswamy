/*
Assuming that x=5, y=0, and =1 initially, what will be their values after executing the following code segments?
(c) if(x)
        if(y)
            z=10;
    else
        z=0;
*/
#include<stdio.h>

int main(){
    int x=5,y=0,z=1;
    if(x)
        if(y)
            z=10;
        else
        z=0;                //The value of x, y and z will be 5, 0 and 0 respectively.
    return 0;
}