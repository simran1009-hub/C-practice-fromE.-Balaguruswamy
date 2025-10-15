/*
Write a C program to display the following pattern:
1
0 1
1 0 1
0 1 0 1
*/
#include<stdio.h>

int main(){
int zero_one=1;
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            if(i%2!=0){
                printf("%d ",zero_one);
                zero_one = 1 - zero_one;
    
            }
            else if(i%2==0) {
                zero_one = 1 - zero_one;
                printf("%d ",zero_one);
    
            }
        }
        zero_one=1;
        printf("\n");
        
    }

    
    return 0;
}