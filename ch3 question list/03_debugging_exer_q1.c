/*
Find errors, if any, in the following declaration statements.

Int x;
float letter,DIGIT;
double =p,q
exponent alpha,beta;
m,n,z : INTEGER
short char c;
long int m; count;
long float temp;

*/
#include<stdio.h>

int main(){
    /*Considering that the question has given the main function's block of code.If not, then "int main(){

                                                                                                                return 0;
                                                                                                        }"
*/
int x;                              //"Int x;" is wrong so it should be "int x;" instead.This is because the integer datatype is "int" and not "Int"
float letter, DIGIT;                //This line of statement has no error.
double p,q;                         //"double =p,q" is wrong since double is a datatype and if we have to declare variables ,p and q belonging to be of this datatype, we should do it like "double p,q;"
double alpha,beta;                  //"exponent alpha,beta;" , "exponent" is not a datatype in C.Hence, instead, alpha and beta can be declared as variables of double datatype or of int or float also
int m,n,z;                          //"m,n,z : INTEGER" is a wrong syntax for declaring m, n and z as integer variables. The correct syntax is "int m,n,z;"
short int C;                        //The type modifier, "short" is only used with int datatype. Hence, "short char c;" is invalid.Instead it should be "short c;" or "short int c;".
long int m, count;                  //"long int m; count;" is invalid since datatype of count isn't mentioned, hence the correct code for this is "long int m, count;"
long double temp;                   //The type modifier "long" is only used with int or double datatypes. Hence, instead of "long float temp;", one should write "long double temp;".

return 0;
}