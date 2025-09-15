/*
Write a C program to input a data value and determine whether the entered day, month, and year values are valid
*/
#include<stdio.h>

int main(){
    int date_value_date,date_value_month,date_value_year;
    printf("Enter the date value in DD MM YYYY format\n");
    scanf("%d %d %d",&date_value_date,&date_value_month,&date_value_year);
   if(date_value_year>0){
 if(date_value_month==1 || date_value_month==3 || date_value_month==5 || date_value_month==7 || date_value_month==8 || date_value_month==10 || date_value_month==12){
    if((date_value_date<=31 && date_value_date>0)  ){
        printf("The entered date is valid\n");
    }
    else{
        printf("The entered date is not valid\n");
    }
 }
 else if(date_value_month==4 || date_value_month==6 || date_value_month==9 || date_value_month==11){
    if(date_value_date<=30 && date_value_date>0 ){
        printf("The entered date is valid\n");
    }
    else{
        printf("The entered date is not valid\n");
    }
 }
 else if(date_value_month==2 ){
    if( (date_value_year%4==0 && date_value_year%100!=0) || date_value_year%400==0){
    if(date_value_date<=29 && date_value_date>0 ){
        printf("The entered date is valid\n");
    }
    else{
        printf("The entered date is invalid\n");
    }
}
else{
    if(date_value_date<=28 && date_value_date>0){
    printf("The entered date is valid\n");
}
else{
    printf("The entered date is invalid\n");
}
}
}
 else{
    printf("The date is invalid\n");
 }
}
else{
    printf("The date is invalid\n");
}

    return 0;
}