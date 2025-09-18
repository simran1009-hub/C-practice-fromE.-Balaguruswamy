/*
Given the string "WORDPROCESSING", write a program to read the string from the terminal and display the same in the following formats:
(a) WORD PROCESSING
*/
#include<stdio.h>
#include<string.h>

int main(){
    char str[40];
    scanf("%s",str);
   int count=strlen(str);
      for (int i = 0; i < 4; i++)
   {
        printf("%c",str[i]);
   }
   printf(" ");
   for (int i=4; i < count; i++)
   {
        printf("%c",str[i]);
   }
   
    
    return 0;
}