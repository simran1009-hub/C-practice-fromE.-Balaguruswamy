/*
Write a for statement to print each of the following sequences of integers:
(b) 1,3,9,27,81,243
*/
#include<stdio.h>

int main(){
    for (int i = 1; i <= 243; i*=3)
    {
        printf("%d",i);
        if(i!=243){
            printf(",");
        }
    }
    
    return 0;
}

