/*
Analyse each of the program segments that follow and determine how many times the body of each loop will be executed.
(c) m = 1;
    do
    {
       _ _ _ _ _
       _________
       m = m+2;
    }
    while (m < 10);
*/
#include<stdio.h>

int main(){
    int m = 1;
    do
    {
       m = m+2;
    } 
    while (m < 10);         // This loop's body will be executed five times.
    
    return 0;
}