/*
Given the string "WORDPROCESSING", write a program to read the string from the terminal and display the same in the following formats:
(c) W.P.
*/
#include<stdio.h>

int main(){
    char str[40];
    scanf("%s",str);
    printf("%c.%c.",str[0], str[4]);
    return 0;
}