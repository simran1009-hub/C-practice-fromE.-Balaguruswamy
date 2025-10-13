/*
Modify the program of Exercise 7.16 to print the character O instead of S at the center of the square as shown below.
                                    S S S S S
                                    S S S S S
                                    S S O S S
                                    S S S S S
                                    S S S S S
*/
#include<stdio.h>

int main(){
    int n=5;
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            if(row==2 && column==2){
                printf("O ");
            }
            else {
                printf("S ");
            }
            
            
        }
        printf("\n");
        
    }
    
    return 0;
}