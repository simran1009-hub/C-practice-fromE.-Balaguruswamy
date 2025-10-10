/*
What is the output of the following code?
        int n = 0, m ;
        for (m = 1; m <= n + 1 ; m++ )
                printf(m) ;
*/
#include<stdio.h>

int main(){
    int n = 0, m ;
        for (m = 1; m <= n + 1 ; m++ )
                printf("%d",m) ;                     // The output of this program is: 1
    return 0;
}