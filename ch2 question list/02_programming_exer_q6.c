/*
Write a C program to print the current system date.
*/
#include<stdio.h>
#include<time.h>

int main(){
    time_t t;
    time(&t);
    struct tm* local = localtime(&t);
    printf("Current Date: %02d-%02d-%d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
    return 0;
}