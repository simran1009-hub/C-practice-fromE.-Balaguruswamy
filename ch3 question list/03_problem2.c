//Q.Write a program to demonstrate the use of different types of constants in C.
#include<stdio.h>

int main(){
    const int number_of_student=9000;
    const float acceleration_due_to_gravity=9.8;
    const char an_alphabet='A';
    const char str[100]="Harry is a great teacher";
    printf("%d\n",number_of_student);
    printf("%.2f\n",acceleration_due_to_gravity);
    printf("%c\n",an_alphabet);
    printf("%s\n",str);
    
    return 0;
}