/*
Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and to display the same in the following format using the printf statement.
(a) ANIL K. GUPTA
*/
#include<stdio.h>
int main(){
    char str1[20];
    char str2[20];
    char str3[20];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    
    printf("%s %c. %s\n",str1,str2[0],str3);
    
    printf("%c.%c. %s\n",str1[0],str2[0],str3);
    
    printf("%s%c.%c.\n",str3,str1[0],str2[0]);
    
    return 0;
}