/*
What is the output of the following program?
main (   )
{
         int m = 5 ;
         if (m < 3) printf("%d" , m+1);
         else if(m < 5) printf("%d", m+2);
         else if(m < 7) printf("%d", m+3);
         else printf("%d", m+4);
}
*/
#include<stdio.h>

int main(   )
{
         int m = 5 ;
         if (m < 3) printf("%d" , m+1);
         else if(m < 5) printf("%d", m+2);
         else if(m < 7) printf("%d", m+3);
         else printf("%d", m+4);                    //Output of this bloack of code is:8
}
