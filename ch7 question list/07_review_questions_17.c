/*
What is the ouput of the following code?
                int n = 0, m = 1 ;
                do
                {
                        printf(m) ;
                        m++ ;
                }
                while (m <= n) ;
*/
#include<stdio.h>

int main(){
            int n = 0, m = 1 ;
                do
                {
                        printf("%d",m) ;
                        m++ ;
                }
                while (m <= n) ;                    // The output of this program is: 1
    return 0;
}