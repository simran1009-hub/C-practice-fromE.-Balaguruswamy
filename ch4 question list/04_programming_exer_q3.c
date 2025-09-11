/*
Given an integer number, write a program that diplays the number as follows:
First line          :   all digits
Second line         :   all except first digit
Third line          :   all except first two digits
......
Last line           :   The last digit
*/
#include<stdio.h>
#include<string.h>

int main(){
    char num[100];
    printf("Enter the number string\n");
    scanf("%s",num);
    int no_of_digits=strlen(num);
    for (int i = 0; i < no_of_digits; i++)
    {
        printf("%s\n",num+i);
    }
    
    return 0;
}