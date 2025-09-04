/*
Write a C program that makes use of different data types to input and print student's name, age and average marks.
*/
#include<stdio.h>

int main(){
    char name[40];
    int age;
    float average_marks;
    printf("Enter the name of student\n");
    scanf("%s",name);
    printf("Enter his/her age\n");
    scanf("%d",&age);
    printf("Enter his/her average marks\n");
    scanf("%f",&average_marks);
    printf("Student's name : %s\n",name);
    printf("Age : %d\n",age);
    printf("Average marks : %.2f\n",average_marks);
    return 0;
}
