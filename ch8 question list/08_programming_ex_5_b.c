/*
The annual examination results of 100 students are tabulated as follows:
Roll No.        Subject 1       Subject 2       Subject 3
.
.
.
Write a program to read the data and determine the following:
(b) The highest marks in each subject and the Roll No. of the student who secured it.
*/
#include<stdio.h>

int main(){
    int Subject_1[100],Subject_2[100],Subject_3[100];
    for (int roll_no = 0; roll_no < 100; roll_no++)
    {
        printf("For roll no. = %d, enter marks in subject 1 subject 2 subject 3\n",roll_no+1);
        scanf("%d %d %d",&Subject_1[roll_no],&Subject_2[roll_no],&Subject_3[roll_no]);
        

    }
    int max_in_subject_1=Subject_1[0], max_in_subject_2=Subject_2[0], max_in_subject_3=Subject_3[0],roll_no_[3]={0};
    for (int roll_no = 0; roll_no < 100; roll_no++)
    {
        if(max_in_subject_1<Subject_1[roll_no]){
            max_in_subject_1=Subject_1[roll_no];
            roll_no_[0]=roll_no+1;
            
        }
        if(max_in_subject_2<Subject_2[roll_no]){
            max_in_subject_2=Subject_2[roll_no];
             roll_no_[1]=roll_no+1;
              
        }
        if(max_in_subject_3<Subject_3[roll_no]){
            max_in_subject_3=Subject_3[roll_no];
            roll_no_[2]=roll_no+1;
                        
        }
    }
    printf("The highest marks in Subject 1 = %d and it is secured by roll no. = %d\nThe highest marks in Subject 2 = %d and it is secured by roll no. = %d\nThe highest marks in Subject 3 = %d and it is secured by roll no. = %d\n",max_in_subject_1,roll_no_[0],max_in_subject_2,roll_no_[1],max_in_subject_3,roll_no_[2]);
    
    return 0;
}
