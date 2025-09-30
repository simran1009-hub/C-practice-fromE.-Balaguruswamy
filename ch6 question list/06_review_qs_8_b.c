/*
Assuming that x=5, y=0, and =1 initially, what will be their values after executing the following code segments?
(b) if(x || y || z)
    y=10;
else
    z=0;
*/
#include<stdio.h>

int main(){
    int x=5,y=0,z=1;
    if(x || y || z)
        y=10;
    else
        z=0;            //After the execution of this code segment, the value of x, y and z will be 5, 10 and 1 respectively.
    return 0;
}