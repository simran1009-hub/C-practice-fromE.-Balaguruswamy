/*
What is the output of the following program?
main( )
{
        int m = 1;
        if ( m==1)
        {
            printf( " Delhi " ) ;
            if (m == 2)
            printf( "Chennai" ) ;
            else
            printf("Bangalore") ;
        }
        else;
        printf(" END");
}
*/
#include<stdio.h>

int main(){
     int m = 1;
        if ( m==1)
        {
            printf( " Delhi " ) ;
            if (m == 2)
            printf( "Chennai" ) ;
            else
            printf("Bangalore") ;
        }
        else;
        printf(" END");                     //The output of this block of code will be:" Delhi Bangalore END"
    return 0;

}