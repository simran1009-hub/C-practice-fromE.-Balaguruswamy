//Q.Write an algorithm and draw a flowchart to assign the grades of a student as per the following rules: ...........<40 --> F
#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks to know your grade\n");
    scanf("%d",&marks);
    if(marks>=90){
        printf("Your grade is O\n");
    }
    else if(marks>=80 && marks<90){
        printf("Your grade is E\n");
    }
    else if(marks>=70 && marks<80){
        printf("Your grade is A\n");
    }
    else if(marks>=60 && marks<70){
        printf("Your grade is B\n");
    }
    else if(marks>=50 && marks<60){
        printf("Your grade is C\n");
    }
    else if(marks >=40 && marks<50){
        printf("Your grade is D\n");
    }
    else {
        printf("Your grade is F\n");
    }

    return 0;
}