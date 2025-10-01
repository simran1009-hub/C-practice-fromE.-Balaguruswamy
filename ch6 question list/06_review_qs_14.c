/*
What will be the value of x when the following segment is executed?
int x = 10, y = 15;
x = (x<y)? (y+x) : (y-x) ;
*/
#include<stdio.h>

int main(){
    int x = 10, y = 15;
x = (x<y)? (y+x) : (y-x) ;
//The value of x after the execution of the given code segment is 25.
    return 0;
}