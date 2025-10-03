/*
Given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:
(d) who have obtained 40 or less marks,
The program should use a minimum number of if statements.
*/
#include<stdio.h>

int main(){
    int mark[7], count=0;
    printf("This program counts the number of students who have obtained 40 or less marks. The mark can range only between 0 to 100\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Enter mark[%d]\n",i);
        scanf("%d",&mark[i]);
        if(mark[i]<0 || mark[i]>100){
            printf("The marks entered is invalid. It can range only between 0 to 100\n");
            return 1;
        }
        else if(mark[i]<=40){
            count++;
        }
    }
    printf("%d number of students have scored 40 marks or less than that\n",count);
    
    return 0;
}