/*
Assuming that x = 2, y = 1 and z = 0 initially, what will be their values after executing the following code segments?
(a) switch(x)
        {
            case 2:
                x = 1;
                y = x + 1;
            case 1:
                x = 0;
                break;
        default:
                x = 1;
                y = 0;
        }
*/
#include<stdio.h>

int main(){
    int x=2,y=1,z=0;
    switch(x)
        {
            case 2:
                x = 1;
                y = x + 1;
            case 1:
                x = 0;
                break;
            default:
                x = 1;
                y = 0;
        }                           //After the code segment executes, the values of x, y and z will be  0, 2 and 0 respectively.
    return 0;
}