/*
Find errors, if any, in each of the following segments:
(c) if (code > 1);
                a = b + c
    else
                a = 0
*/
#include<stdio.h>

int main(){
    int a, b, c, code ;
    printf("Enter a b c code\n");
    scanf("%d %d %d %d",&a, &b, &c, &code);
    if (code > 1)                               //The syntax of if statement is "if(condition to be checked){//a valid C code}" or if there is only one line of instruction inside the if statement then, this syntax also works well, "if(condition to be checked) //a valid C code". Also any line of instruction in C has to be terminated with a semi-colon, i.e. ";".
                a = b + c;
    else
                a = 0;
    return 0;
}