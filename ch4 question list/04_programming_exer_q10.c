/*
Given three values, write a program to read three values from keyboard and print out the largest of them without using if statement
*/
#include<stdio.h>
#include<math.h>

int main(){
   int n1, n2, n3;
    printf("Enter n1 n2 n3, we will print the largest among them\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int largest=fmax(n1,fmax(n2,n3));
    printf("%d\n",largest);
    return 0;
}