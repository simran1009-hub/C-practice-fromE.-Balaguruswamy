/*
Change the following for loops to while loops:
(a) for (m = 1; m < 10; m = m + 1)
    printf(m);
*/
#include<stdio.h>

int main(){
    int m = 1;
    while(m < 10){
        printf("%d",m);
        m = m + 1;
    }
    return 0;
}