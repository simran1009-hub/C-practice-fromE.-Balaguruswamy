/*
Rewrite each of the following without using compound relations:
(a) if (grade <= 59 && grade >= 50)
    second = second + 1;
*/
#include<stdio.h>

int main(){
    int grade;
    float second;
    printf("Enter value of grade\n");
    scanf("%d",&grade);
    printf("Enter value of second\n");
    scanf("%f",&second);
    if(grade<=59){
        if(grade>=50){
            second = second + 1;
        }
    }
    
    return 0;
}