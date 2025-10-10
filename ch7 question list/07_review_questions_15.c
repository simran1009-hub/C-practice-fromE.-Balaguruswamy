/*
What is the output of following code?
        int m = 100, n = 0;
        while ( n == 0 )
        {
                    if ( m < 10 )
                        break;
                    m = m-10;
}
*/
#include<stdio.h>

int main(){
    int m = 100, n = 0;
        while ( n == 0 )
        {
                    if ( m < 10 )
                        break;
                    m = m-10;
                }                           // There is not output of this program.
                return 0;
}