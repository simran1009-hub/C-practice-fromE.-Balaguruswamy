/*
Change the for loops in Exercise 7.13 (a) to do loops.
Exercise 7.13 (a) for (m = 1; m < 10; m = m + 1)
    printf(m);
*/
#include<stdio.h>

int main(){
    int m = 1;
    do{
        printf("%d",m);
        m = m + 1;
    }while(m < 10);
    return 0;
}