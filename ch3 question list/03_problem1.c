//Q. Write a program to display the size of all basic data types in C.
#include<stdio.h>

int main(){
    int i;
    float f;
    char c;
    double d;
    printf("The size of integer variable is %d\n",sizeof(int));
    printf("The size of floating point variable is %d\n",sizeof(float));
    printf("The size of character variable is %d\n",sizeof(char));
    printf("The size of double variable is %d\n",sizeof(double));
    return 0;
}