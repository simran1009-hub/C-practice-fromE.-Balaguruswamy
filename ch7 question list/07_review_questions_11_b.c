/*
Analyse each of the program segments that follow and determine how many times the body of each loop will be executed.
(b) int m = 10;
    int n = 7;
    while ( m % n >= 0)
    {
        _ _ _
        m = m + 1;
        n = n + 2;
        _ _ _
    }
*/
#include<stdio.h>

int main(){
    int m = 10;
    int n = 7;
    while ( m % n >= 0)
    {
        m = m + 1;
        n = n + 2;

    }                           // This loop's body will be executed infinite number of times.
    return 0;
}