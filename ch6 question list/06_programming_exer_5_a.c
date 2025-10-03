/*
Admission to a professional course is subject to the following conditions:
(a) Marks in Mathematics >= 60
(b) Marks in Physics >= 50
(c) Marks in Chemistry >=40
(d) Total in all three subjects >= 200
or
Total in Mathematics and Physics >= 150
Given the marks in the three subjects, write a program to process the applications to list the eligible  candidates.
*/
#include<stdio.h>

int main(){
    int marks_maths, marks_phy, marks_chem;
    printf("Enter marks obtained in Mathematics\n");
    scanf("%d",&marks_maths);
    printf("Enter marks obtained in Physics\n");
    scanf("%d",&marks_phy);
    printf("Enter marks obtained in Chemistry\n");
    scanf("%d",&marks_chem);
    if((marks_maths>=60 && marks_chem>=40 && marks_phy>=50 && (((marks_maths+marks_phy+marks_chem) >=200) || ((marks_maths+marks_phy)>=150)) )){
        printf("You are eligible for admission into this professional course\n");
    }
    else {
        printf("You are not eligible for admission into this course\n");
    }
    return 0;
}
