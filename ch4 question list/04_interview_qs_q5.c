/*
Write the code for swapping two variable values without using a third variable
*/
#include<stdio.h>
 
int main(){
    int a=6, b=7;
    printf("a = %d and b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d and b = %d\n",a,b);

    return 0;
}