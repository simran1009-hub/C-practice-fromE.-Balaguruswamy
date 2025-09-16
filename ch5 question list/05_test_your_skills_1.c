/*
Write a C program to enter the student's grades and print the average of grades.
*/
#include<stdio.h>

int main(){
char grade[5];
int marks[5];
for (int i = 0; i < 5; i++)
{
  printf("Enter grade[%d], grade can be among A, B, C, D or E itself\n",i);
  scanf(" %c",&grade[i]);
  if(grade[i]=='A'){
    marks[i]=10;
  }
  else if(grade[i]=='B'){
    marks[i]=8;
  }
  else if(grade[i]=='C'){
    marks[i]=6;
  }
  else if(grade[i]=='D'){
    marks[i]=4;
  }
  else if(grade[i]=='E'){
    marks[i]=0;
  }
  else{
    printf("The value of grade is invalid\nGrades can only be among A, B, C, D and E\n");
    return 0;
  }

}
float sum=0.00;
for (int i = 0; i < 5; i++)
{
  sum += marks[i];
}
sum /= 5;
 printf("The average of grades is %.2f\n",sum);
    return 0;
}