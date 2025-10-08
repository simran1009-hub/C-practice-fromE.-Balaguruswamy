/*
What would be the output of each of the following code segments?
(b) count = 5;
    while ( -- count > 0)
    printf(count);
*/
#include<stdio.h>

int main(){
    int count=5;
    while ( -- count > 0)
    printf("%d",count);             // The output of the program is: 4321
    return 0;
}