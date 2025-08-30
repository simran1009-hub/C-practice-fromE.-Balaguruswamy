//Q.Write a program to input marks of 5 subjects, calculate total and average marks.
#include<stdio.h>

int main(){
    float marks1,marks2,marks3,marks4,marks5;
    printf("Enter marks1 marks2 marks3 marks4 marks5\n");
    scanf("%f %f %f %f %f",&marks1,&marks2,&marks3,&marks4,&marks5);
    printf("Total marks = %.2f\n",(marks1+marks2+marks3+marks4+marks5));
    printf("And the average marks = %.2f\n",((marks1+marks2+marks3+marks4+marks5)/5));
    return 0;
}