/*
Write a program to read and display the following table of data.
    Name        Code        Price
    Fan         67831       1234.50
    Motor       450         5786.70
The name and code must be left-justified and price must be right-justified.
*/
#include<stdio.h>

int main(){
    char name1[20],name2[20];
    printf("Enter the name of 1st_item 2nd_item\n");
    scanf("%s %s",name1,name2);
    int code1,code2;
    printf("Enter code1 code2\n");
    scanf("%d %d",&code1,&code2);
    printf("Enter price1 price2\n");
    float price1, price2;
    scanf("%f %f",&price1,&price2);
   
    char str1[]="Name";
    char str2[]="Code";
    char str3[]="Price";
    printf("%-10s%-10s%10s\n",str1,str2,str3);

    printf("%-10s%-10d%10.2f\n",name1,code1,price1);
    printf("%-10s%-10d%10.2f\n",name2,code2,price2);

    return 0;
}