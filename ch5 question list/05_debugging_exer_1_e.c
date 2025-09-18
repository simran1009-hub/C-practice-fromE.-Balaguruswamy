/*
State errors, if any, in the following input statements
scanf("%c %d %ld", *code, &count, Root);
*/
#include<stdio.h>

int main(){
    char code;
    int count;
    long int Root;
    scanf(" %c %d %ld", &code, &count, &Root);       //To read a input through scanf in any variable we have to give the address of that variable in the memory. For the same we have to use the "address of operator", i.e. "&".
                                                    //Hence it should be "&code" instead of "*code" ("*" is called "value at address" operator, it is used to fetch the value at the address given to it).
                                                    //Also, it should be "&Root" instead of "Root".
    return 0;
}