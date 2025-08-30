//Q. Write a program to declare different types of variables and display their sizes using sizeof.
#include<stdio.h>

int main(){
    int integer_var;
    float floating_point_variable;
    char character_variable;
    printf("The size of integer variable is %d\n",sizeof(int));
    printf("The size of floating point variable is %d\n",sizeof(float));
    printf("The size of character variable is %d\n",sizeof(char));
    return 0;
}