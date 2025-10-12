/*
Write a program to read the age of 100 persons and count the number of persons in the age group 50 to 60.
Use for and continue statements.
*/
#include<stdio.h>

int main(){
    int age[100],count=0;
    for (int i = 0; i < 100; i++)
    {
        printf("Enter age[%d]\n",i);
        scanf("%d",&age[i]);
        if(age[i]>=50 && age[i]<60){
            count++;
        }
        else{
            continue;
        }
    }
    printf("There are %d people whose age lies in the range of 50 to 60\n",count);
    
    return 0;
}