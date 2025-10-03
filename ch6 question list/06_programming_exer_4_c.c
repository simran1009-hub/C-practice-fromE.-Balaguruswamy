/*
Given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:
(c) who have obtained more than 40 marks,
The program should use a minimum number of if statements.
*/
#include<stdio.h>

int main(){
    int mark[7],count=0;
    printf("This program counts the number of students who have scored more than 40 marks. The marks obtained can lie within the range of 0 to 100 only\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Enter mark[%d]\n",i);
        scanf("%d",&mark[i]);
        if(mark[i]<0 || mark[i]>100){
            printf("This mark is invalid. The marks obtained can lie within the range of 0 to 100 only\n");
            return 1;
        }
        else if(mark[i]>40 && mark[i]<=100){
           count++;
       }
    }
    printf("%d number of students have scored above 40 marks\n",count);    
    return 0;
}