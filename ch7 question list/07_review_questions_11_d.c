/*
Analyse each of the program segments that follow and determine how many times the body of each loop will be executed.
(d) int i;
    for (int i = 0; i <=5; i = i+2/3)
    {
        _ _ _ _ _
        _ _ _ _ _
        _________
    }
*/
#include<stdio.h>

int main(){
    int i;
    for ( i = 0; i <= 5; i = i+2/3)
    {
        
    }                                       // This loop's body will be executed infinite number of times.
    
    return 0;
}