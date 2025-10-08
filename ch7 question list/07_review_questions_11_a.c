/*
Analyse each of the program segments that follow and determine how many times the body of each loop will be executed.
(a) x = 5;
    y = 50;
    while (x <= y)
    {
       x = y/x;
       _ _ _ _
       _______
    }
*/
#include<stdio.h>

int main(){
    int x = 5;
    int y = 50;
    while (x <= y)
    {
        x = y/x;            // The body of this loop will execute infinite number of times. 

    }
    return 0;
}