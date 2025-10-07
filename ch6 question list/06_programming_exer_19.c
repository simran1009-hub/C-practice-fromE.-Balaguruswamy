/*
Using Switch case block, input the name of the month from the user and display the corresponding number
of days in that month.
*/
#include <stdio.h>
#include<string.h>

int main()
{
    char name_of_the_month[20];
    int month_no, no_of_days;
    printf("Enter the name of the month (all in lowercase), we will calculate the number of days in that month\n");
    scanf("%s", name_of_the_month);
    if(strcmp(name_of_the_month,"january")==0){
        month_no=1;
    }
    if(strcmp(name_of_the_month,"february")==0){
        month_no=2;
    }
    if(strcmp(name_of_the_month,"march")==0){
        month_no=3;
    }
    if(strcmp(name_of_the_month,"april")==0){
        month_no=4;
    }
    if(strcmp(name_of_the_month,"may")==0){
        month_no=5;
    }
    if(strcmp(name_of_the_month,"june")==0){
        month_no=6;
    }
    if(strcmp(name_of_the_month,"july")==0){
        month_no=7;
    }
    if(strcmp(name_of_the_month,"august")==0){
        month_no=8;
    }
    if(strcmp(name_of_the_month,"september")==0){
        month_no=9;
    }
    if(strcmp(name_of_the_month,"october")==0){
        month_no=10;
    }
    if(strcmp(name_of_the_month,"november")==0){
        month_no=11;
    }
    if(strcmp(name_of_the_month,"december")==0){
        month_no=12;
    }
    switch(month_no){
        case 1:
        no_of_days=31;
        break;
        
        case 2 :
        no_of_days=28;
        break;
        
        case 3:
        no_of_days=31;
        break;
        
        case 4:
        no_of_days=30;
        break;
        
        case 5:
        no_of_days=31;
        break;
        
        case 6:
        no_of_days=30;
        break;

        case 7:
        no_of_days=31;
        break;

        case 8:
        no_of_days=31;
        break;

        case 9:
        no_of_days=30;
        break;

        case 10:
        no_of_days=31;
        break;

        case 11:
        no_of_days=30;
        break;

        case 12:
        no_of_days=31;
        break;
    }
    printf("Number of days in %s is = %d\n", name_of_the_month, no_of_days);
    return 0;
}