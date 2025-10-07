/*
Write a C program to input the total percentage of marks of a student and display its Division using below rules:
(a) Greater than or equal to 80 percent - "First Division"
(b) Greater than or equal to 60 percent and less than 80 percent - "Second Division"
(c) Less than 60 percent - "Third Division"
*/
#include<stdio.h>

int main(){
    int total_percentage_of_marks;
    printf("Enter the total percentage of marks of student\n");
    scanf("%d",&total_percentage_of_marks);
    if(total_percentage_of_marks>=80){
        printf("First Division\n");
    }
    else if(total_percentage_of_marks>=60 && total_percentage_of_marks<80){
        printf("Second Division\n");
    }
    else if(total_percentage_of_marks<60){
        printf("Third Division\n");
    }
    else {
        printf("Invalid percentage\n");
    }
    return 0;
}