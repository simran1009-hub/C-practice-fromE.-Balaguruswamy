/*
Write a program to print a square of size 5 by using the character S as shown below:
(b) S S S S S 
    S       S
    S       S
    S       S
    S S S S S
*/
#include<stdio.h>

int main(){
    int n=5;
   for (int row = 0; row < n; row++)
   {
        for (int column = 0; column < n; column++)
        {
            if((row==0) || (row>0 && row<4 && column==0) || (row==4) || (row>0 && row<4 && column==4)){
                printf("S ");
            }
            
            else if(row>0 && row<4 && column!=4 ){
                printf("  ");
            
        }
    }
    printf("\n");
}
return 0;
}