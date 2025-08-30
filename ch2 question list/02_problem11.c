//Q. Write a program to evaluate expressions using arithmetic, relational, and logical operators.
#include<stdio.h>

int main(){
    int a=10,b=40,c=5,d=100;
    if(((a+b)>c && (d<c))){
        printf("((a+b)>c && (d<c)) = TRUE\n");
    }
    else{
        printf("((a+b)>c && (d<c)) = FALSE\n");
    }
    return 0;
}