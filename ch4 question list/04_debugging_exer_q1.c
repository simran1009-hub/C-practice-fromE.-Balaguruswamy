/*
What is the error, if any, in the following segement?

int x = 10;
float y = 4.25;
x = y%x ;
*/
#include<stdio.h>               //Headerfile should be written

int main(){                     //Main function's definition is necessary i.e. "int main(){      return 0;      }" has to be written in a C program.
    int x = 10 ;                // This line of code has no error.
    float y = 4.25 ;            //This line of code has no error.
    // x = y%x ;                   //Modulus operator can be applied only on integer datatypes
    return 0;                   //"return 0;" statement is necessary   
}