/*
Write a program to read three integers from the keyboard using one scanf statement and ouput them on one line using:
(a) three printf statements,
*/
#include<stdio.h>

int main(){
    int i1,i2,i3;
    scanf("%d %d %d",&i1,&i2,&i3);
    printf("%d ",i1);
    printf("%d ",i2);
    printf("%d\n",i3);
    return 0;
}