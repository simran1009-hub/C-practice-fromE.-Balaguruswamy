//Q.Write a program to print the sum of two numbers.
#include<stdio.h>

int sum(int,int);

int sum(int n1,int n2){

    return (n1 + n2);
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
   printf("The sum of %d and %d is %d\n",n1,n2,sum(n1,n2));
   
   return 0;
}