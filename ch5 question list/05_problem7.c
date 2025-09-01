//Q.Write a program to generate and print the first n terms of the Fibonacci sequence.
#include<stdio.h>
int fibonacci_sequence(int);

int fibonacci_sequence(int n){
    if(n==1 || n==2){
        return (n-1);
    }
    return (fibonacci_sequence(n-1) + fibonacci_sequence(n-2));
}
int main(){
    int n;
    printf("Enter n, we'll print the fibonacci sequence till its nth term\n");
    scanf("%d",&n);
    printf("The fibonacci sequence till %d terms is:\n",n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",fibonacci_sequence(i));
        
    }
    return 0;  

}