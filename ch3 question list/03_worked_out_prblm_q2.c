/*
The first executable statement in the program is a printed requesting the user to enter integer number this is
 known as prompt message and appears on the screen like enter and integer number as soon as the user types in an integer
number the computer proceeds to compare the value with 100 if the value type is in less than 100 then a message your number 
is smaller than 100 is printed on the screen otherwise the message your number contains more than two digits is printed
*/
#include<stdio.h>

int main(){
    int integer_number;
    printf("Enter an integer number\n");
    scanf("%d",&integer_number);
    if(integer_number<100){
        printf("Your number is smaller than 100\n");
    }
    else{
        printf("Your number contains more than two digits\n");
    }
    return 0;
}