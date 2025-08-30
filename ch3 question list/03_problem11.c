//Q.Write a program to demonstrate constants using #define and const.
#include<stdio.h>
#define pi 3.14

int main(){
printf("pi=%f\n",pi);
const int number_of_students=9900;
printf("number of students=%d\n",number_of_students);
return 0;
}