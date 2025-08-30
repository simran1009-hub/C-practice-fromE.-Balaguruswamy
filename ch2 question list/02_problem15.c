//Q. Write a program to demonstrate constants using const keyword and #define.
#include<stdio.h>
#define pi 3.14

int main(){
printf("pi=%f\n",pi);
const int days=7;
printf("days=%d\n",days);
return 0;
}