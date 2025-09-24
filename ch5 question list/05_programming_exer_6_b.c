/*
Write a program to read three integers from the keyboard using one scanf statement and ouput them on one line using:
(b) only one printf with conversion specifiers, and
*/
#include<stdio.h>

int main(){
    int i1,i2,i3;
    scanf("%d %d %d",&i1,&i2,&i3);
    printf("%d %d %d\n",i1,i2,i3);
    return 0;
}