/*
Write a C program to input the numeric week day value(starting from Monday as 1) and display the corresponding name 
of the week day.
*/
#include<stdio.h>

int main(){
    int numeric_week_day_value;
   
    printf("Enter numeric week day value, starting from 1 to 7 corresponding to Monday to Sunday in order\n");
    scanf("%d",&numeric_week_day_value);
    if(numeric_week_day_value==1){
       char name_of_the_week_day[30]="Monday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
    else if(numeric_week_day_value==2){
       char name_of_the_week_day[30]="Tuesday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
    else if(numeric_week_day_value==3){
       char name_of_the_week_day[30]="Wednesday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
    else if(numeric_week_day_value==4){
       char name_of_the_week_day[30]="Thursday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
    else if(numeric_week_day_value==5){
       char name_of_the_week_day[30]="Friday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
    else if(numeric_week_day_value==6){
       char name_of_the_week_day[30]="Saturday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
    else if(numeric_week_day_value==7){
       char name_of_the_week_day[30]="Sunday";
        printf("For numeric week day value = %d, the name of the week day = %s\n",numeric_week_day_value,name_of_the_week_day);
    }
   else{
      printf("Invalid numeric week day value\n");
   }
   
    return 0;
}