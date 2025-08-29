//Q.Write a program to convert days into years, weeks, and days.
#include<stdio.h>
void days_into(int);

void days_into(int days){
    int year=days / 365;
    int remaining_days=(days % 365);
   int week= remaining_days / 7;
   int day_a=remaining_days % 7;
   printf("%d days converts to %d years, %d weeks and %d days\n",days,year,week,day_a);
 
}
int main(){
    int days;
    printf("Enter the no. of days that has to be simplified into years + weeks + days\n");
    scanf("%d",&days);
    days_into(days);
    return 0;

}