//Q. Write a program to demonstrate assignment operators (=, +=, -=, etc.).
#include<stdio.h>

int main(){
    int i=5;
    printf("i is assigned %d\n",i);
    i += 7;
    printf("Now, i += 7 = %d\n",i);
    i -= 3;
    printf("Further, i -= 3 = %d\n",i);
    i *= 4;
    printf("Moving on, i *= 4 = %d\n",i);
    i /= 6;
    printf("Lastly, i /= 6 = %d\n",i);
    return 0;
}