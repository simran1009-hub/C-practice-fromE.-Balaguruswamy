/*
Write a program using for and if statement to display the capital letter S in a grid of 15 rows and 18 columns 
as shown below.
*/
#include<stdio.h>

int main(){
    for (int row = 0; row < 15; row++)
    {
        for (int column = 0; column < 18; column++)
        {
            if(row==0){
                printf("* ");
            }
             else if(row>0 && row< 7 && column==0){
                printf("* ");
            }
            else if(row==7){
                printf("* ");
            }
            else if(column==17 && row>7 && row< 14){
              
                               
                printf("* ");
            }
            else if(row==14){
                printf("* ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
        
    }
    
    return 0;
}