//Q.Write a program to display your name, address, and phone number.
#include<stdio.h>

int main(){
    char name[40];
    printf("Enter your name\n");
    scanf("%s",name);
    fflush(stdin);

    char address[250];
    printf("Enter your address\n");
    gets(address);

    char phone_number[11];
    printf("Enter your phone number\n");
    scanf("%s",phone_number);

    printf("%s\n",name);
    printf("%s\n",address);
    printf("%s\n",phone_number);
    
    return 0;
}