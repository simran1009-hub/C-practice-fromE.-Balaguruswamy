/*
Write a C program to input the amount value and break it into the smallest
possisble Indian currency notes(s).
*/
#include <stdio.h>

int main()
{
    int amount, no_of_Rs2000, no_of_Rs500, no_of_Rs200, no_of_Rs100, no_of_Rs50, no_of_Rs20, no_of_Rs10, no_of_Rs1;
    printf("Enter amount, we will break it into the smallest possible Indian currency notes(s)\n");
    scanf("%d", &amount);
    no_of_Rs2000 = amount / 2000;
    int remaining = amount % 2000;
    no_of_Rs500 = remaining / 500;
    remaining = remaining % 500;
    no_of_Rs200 = remaining / 200;
    remaining = remaining % 200;
    no_of_Rs100 = remaining / 100;
    remaining = remaining % 100;
    no_of_Rs50 = remaining / 50;
    remaining = remaining % 50;
    no_of_Rs20 = remaining / 20;
    remaining = remaining % 20;
    no_of_Rs10 = remaining / 10;
    no_of_Rs1 = remaining % 10;
    printf("Amount Rs%d can be broken down into:\n\n", amount);
    if(no_of_Rs2000){
        printf("%d notes(s) of\t-->\tRs2000\n",no_of_Rs2000);
    }
    if(no_of_Rs500){
        printf("%d notes(s) of\t-->\tRs500\n",no_of_Rs500);
    }
    if(no_of_Rs200){
        printf("%d notes(s) of\t-->\tRs200\n",no_of_Rs200);
    }
    if(no_of_Rs100){
        printf("%d notes(s) of\t-->\tRs100\n",no_of_Rs100);
    }
    if(no_of_Rs50){
        printf("%d notes(s) of\t-->\tRs50\n",no_of_Rs50);
    }
    if(no_of_Rs20){
        printf("%d notes(s) of\t-->\tRs20\n",no_of_Rs20);
    }
    if(no_of_Rs10){
        printf("%d notes(s) of\t-->\tRs10\n",no_of_Rs10);
    }
    if(no_of_Rs1){
        printf("%d notes(s) of\t-->\tRs1\n",no_of_Rs1);
    }
    return 0;
}