/*
Write a C program that inputs a string and counts the number of capital and small alphabets in that string.
*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int ascii_value,no_of_small_alphabets=0,no_of_capital_alphabets=0;
    printf("Enter the string\n");
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        ascii_value=str[i];
        if(ascii_value>=65 && ascii_value<=90){
           no_of_capital_alphabets++;
    }
    else if(ascii_value>=97 && ascii_value<=122){
        no_of_small_alphabets++;
       }
    }
    printf("In \"%s\", the number of capital alphabets = %d & the number of small alphabets = %d\n",str,no_of_capital_alphabets,no_of_small_alphabets);
    
    return 0;
}