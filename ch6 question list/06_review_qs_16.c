/*
What will be the output when the following segment is executed?
char ch = 'a' ;
switch (ch)
{
case 'a' :
printf( "A" ) ;
case'b':
Printf ("B") ;
default :
printf(" C ") ;
}
*/
#include<stdio.h>

int main(){
    char ch = 'a' ;
switch (ch)
{
case 'a' :
printf( "A" ) ;
case'b':
printf ("B") ;          //The syntax for printing any statement in C is "printf" and not "Printf".
default :
printf(" C ") ;
}                       //The output of the program is:AB C
    return 0;
}