/*
Write a for loop statement that initializes all the diagonal elements of an array to one and 
others to zero as shown below. Assume 5 rows and 5 columns.
1       0       0       0       0       .......     0
0       1       0       0       0       .......     0
0       0       1       0       0       .......     0
.
.
.
.
.
0       0       0       0       0       .......     1
*/
#include<stdio.h>

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i==j){
                printf("%d      ",1);
            }
            else{
                printf("%d      ",0);
            }
        }
        printf("\n");
        
    }
    
    return 0;
}