/*
The annual examination results of 100 students are tabulated as follows:
Roll No.        Subject 1       Subject 2       Subject 3
.
.
.
Write a program to read the data and determine the following:
(a) Total marks obtained by each student.
*/
#include<stdio.h>

int main(){
    int total_marks[100];
    int Subject_1[100],Subject_2[100],Subject_3[100];
    for (int roll_no = 0; roll_no < 100; roll_no++)
    {
        printf("For roll no. = %d, enter marks in subject 1 subject 2 subject 3\n",roll_no+1);
        scanf("%d %d %d",&Subject_1[roll_no],&Subject_2[roll_no],&Subject_3[roll_no]);
        total_marks[roll_no]=Subject_1[roll_no]+Subject_2[roll_no]+Subject_3[roll_no];

    }
    for (int roll_no = 0; roll_no < 100; roll_no++)
    {
        printf("For Roll no: %d, total marks obtained = %d\n",roll_no+1,total_marks[roll_no]);
    }
    
    return 0;
}