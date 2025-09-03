/*
Write a program that will print your mailing address in the following form:
First line         : Name
Second line        :Door No, Street
Third line         :City,Pin code
*/
#include <stdio.h>

int main()
{
    char name[100], street[250], city[150];
    printf("Enter your name\n");
    scanf("%[^\n]%*c", name);

    printf("Enter your door no, street\n");
    scanf("%[^\n]%*c", street);

    printf("Enter your city, pin code\n");
    scanf("%[^\n]%*c", city);

    printf("%s\n", name);
    printf("%s\n", street);
    printf("%s\n", city);

    return 0;
}