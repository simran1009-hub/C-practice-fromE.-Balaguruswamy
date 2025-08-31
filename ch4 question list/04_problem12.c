//Q.Write a function to print Fibonacci series using recursion.
#include<stdio.h>

int fibonacci_series(int);

int fibonacci_series(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return (fibonacci_series(n-1) + fibonacci_series(n-2));
}
int main(){
    int n;
    printf("Enter n, we will print Fibonacci series upto nth term\n");
    scanf("%d",&n);
    printf("The Fibonacci series upto %d terms is:\n",n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t",fibonacci_series(i));
    }
    
return 0;
}