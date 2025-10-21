/*
The annual examination results of 100 students are tabulated as follows:
Roll No.        Subject 1       Subject 2       Subject 3
.
.
.
Write a program to read the data and determine the following:
(c) The student who obtained the highest total marks.
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
    int max_total_marks=total_marks[0],roll_no_=0;
    for (int roll_no = 0; roll_no < 100; roll_no++)
    {
        if(max_total_marks<total_marks[roll_no]){
            max_total_marks=total_marks[roll_no];
            roll_no_=roll_no;
        }
    }
    printf("Roll no = %d secured the highest total marks which is = %d\n",roll_no_+1,max_total_marks);
    
    return 0;
}
