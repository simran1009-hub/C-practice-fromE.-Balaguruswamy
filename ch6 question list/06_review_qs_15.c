/*
What will be the output when the following segment is executed?
        int x = 0;
        if (x >= 0)
        if (x > 0 )
        printf("Number is positive");
    else 
    printf("Number is negative");
*/
#include<stdio.h>

int main(){
    int x = 0;
        if (x >= 0)
        if (x > 0 )
        printf("Number is positive");
    else 
    printf("Number is negative");
    //The output of the given code segment is:Number is negative
    return 0;
}