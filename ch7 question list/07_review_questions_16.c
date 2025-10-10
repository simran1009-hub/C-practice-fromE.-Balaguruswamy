/*
What is the output of the following code?
            int m = 0 ;
            do
            {
                    if (m > 10 )
                            continue ; 
                    m = m + 10 ;
            } while ( m < 50 ) ;
            printf("%d", m);
}
*/
#include<stdio.h>

int main(){
      int m = 0 ;
            do
            {
                    if (m > 10 )
                            continue ; 
                    m = m + 10 ;
            } while ( m < 50 ) ;
            printf("%d", m);                    // The do-while loop in this program runs infinitely.
    return 0;
}