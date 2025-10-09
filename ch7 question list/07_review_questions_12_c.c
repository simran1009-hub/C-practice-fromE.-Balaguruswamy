/*
Write a for statement to print each of the following sequences of integers:
(c) -4,-2,0,2,4
*/
#include<stdio.h>

int main(){
    for (int i = -4; i <= 4; i+=2)
    {
        printf("%d",i);
        if(i!=4){
        printf(",");
        }
    }
    
    return 0;
}