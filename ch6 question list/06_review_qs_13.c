/*
What is the output of the following program?
main( )
{
            int m, n, p ;
            for ( m = 0; m < 3; m++ )
            for (n = 0; n<3; n++ )
            for ( p = 0; p < 3;; p++ )
            if ( m + n + p == 2 )
            goto print;
            
            print :
            printf("%d, %d, %d", m, n, p);
}
*/
#include<stdio.h>

int main( )
{
            int m, n, p ;
            for ( m = 0; m < 3; m++ )
            for (n = 0; n<3; n++ )
            for ( p = 0; p < 3; p++ )           //Firstly there was an extra semi-colon after the conditional statement in the third for loop, which is  syntax error.
            if ( m + n + p == 2 )
            goto print;
            
            print :
            printf("%d, %d, %d", m, n, p);
            //The output of this program is:0, 0, 2
}