/*
The factorial of an integer m is the product of consecutive integers from 2 to m. That is, factorial m = m! = m X (m-1)
x ...... x 1.
Write a program that computes and prints a table of factorials for any given m.
*/
#include<stdio.h>
 
int computes_factorial(int);

int computes_factorial(int m){
    if(m==0 || m==1){
        return 1;
    }
    return (computes_factorial(m-1)*m);
}
int main(){
    int m;
    printf("Enter m, we will compute and print the table of factorial for numbers from 0 to m\n");
    scanf("%d",&m);
 
    for (int i = 0; i <= m; i++)
    {
        printf("%d! = %d\n",i,computes_factorial(i));
       
    }
    
    
    return 0;
}