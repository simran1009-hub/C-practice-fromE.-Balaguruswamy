/*
Given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:
(a) who have obtained more than 80 marks,
The program should use a minimum number of if statements.
*/
#include<stdio.h>

int main(){
int mark[7],count=0;
printf("A test was conducted with no negative marking, hence a student can score in a range of 0 to 100 only\n");

for (int i = 0; i < 7; i++)
{
    printf("Enter mark[%d]\n",i);
    scanf("%d",&mark[i]);
    if(mark[i]>80 && mark[i]<=100){
        
        count++;
    }
    else if(mark[i]<0 || mark[i]>100){
        printf("Marks obtained can lie in the range of 0 to 100 only\n");
        return 1;
    }
}
printf("%d students have scored more than 80 marks\n",count);
    return 0;
}