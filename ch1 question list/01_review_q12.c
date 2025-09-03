/*
Write an elgorithm and draw a flowchart to find the sum of the following series:
1! + 2! + 3! + ........ + N!
*/
#include<stdio.h>
int factorial(int);
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return (factorial(n-1)*n);
}
int main(){
    int n;
    printf("Enter n, we will calculate the sum of this series: 1! + 2! + 3! + ....\ntill n terms\n");
    scanf("%d",&n);
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
     sum += factorial(i);   
    }
    printf("The sum of %d terms of this series is %d\n",n,sum);
    return 0;    
}