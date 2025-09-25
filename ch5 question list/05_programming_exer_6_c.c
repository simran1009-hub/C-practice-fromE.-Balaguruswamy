/*
Write a program to read three integers from the keyboard using one scanf statement and ouput them on one line using:
(c) only one printf without conversion specifiers
*/
#include<stdio.h>
#include<string.h>

int main(){
    int i1,i2,i3;
    char str[40];
    scanf("%d %d %d",&i1,&i2,&i3);
    sprintf(str,"%d %d %d", i1,i2,i3);
    printf(str);
    return 0;
}


