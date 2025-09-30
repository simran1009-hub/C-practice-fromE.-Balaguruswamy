/*
Assuming that x=5, y=0, and z=1 initially, what will be their values after executing the following code segments?
(d) if(x==0 || x&&y)
    if(!y)
        z=0;
    else
        y=1;
*/
#include<stdio.h>

int main(){
    int x=5,y=0,z=1;
    if(x==0 || x&&y)
        if(!y)
            z=0;
        else
            y=1;            //After the execution of this code segment, the values of x, y and z remains same, i.e. the values of x, y and z are 5, 0 and 1 respectively.
    return 0;
}