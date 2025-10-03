/*
Given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:
(h) in the range 0 to 40.
The program should use a minimum number of if statements.
*/
#include<stdio.h>

int main(){
    int mark[7], count=0;
    printf("This program counts the number of students who have obtained marks between 0 to 40\n. The marks entered should lie between 0 to 100 only\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Enter mark[%d]\n",i);
        scanf("%d",&mark[i]);
        if(mark[i]<0 || mark[i]>100){
            printf("This mark is invalid. It can only lie in the range of 0 to 100\n");
            return 1;
        }
       if(mark[i]<=40){
            count++;
        }
    }
    printf("%d number of students have scored in the range of 0 to 40\n",count);
    
    return 0;
}